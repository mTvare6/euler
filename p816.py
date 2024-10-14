from functools import cache
from random import randrange
from dataclasses import dataclass
from math import sqrt, floor

a:int = 290797
MOD:int = 50515093
N:int = int(2e6)

@dataclass
class Point:
    x:int
    y:int
    def __hash__(self):
        return (self.x^73856093)*(self.y^83492791)
    def __eq__(self, other):
        return self.x == other.x and self.y == other.y


@cache
def s(n:int)->int:
    if n == 0:
        return a
    else:
        return (s(n - 1) * s(n - 1)) % MOD


m:list[Point] = []
mtap:dict[Point,list[Point]] = dict()

for i in range(N):
    m.append(Point(s(2*i), s(2*i+1)))

def sq(r1:Point, r2:Point) -> int:
    return (r1.x-r2.x)**2 + (r1.y-r2.y)**2


min = sq(m[3*N//67],m[ 6*N//43])
for i in range(N):
    x, y = randrange(N), randrange(N)
    while x==y:
        x, y = randrange(N), randrange(N)
    if (crn:=sq(m[x], m[y]))<min:
        min=crn

g = floor(sqrt(min))

for e in m:
    p = Point(e.x//g, e.y//g)
    try:
        mtap[p].append(e)
    except KeyError:
        mtap[p] = [e]

for gp, pv in mtap.items():
    sz = len(pv)
    for i in range(sz):
        for j in range(i):
            if (crn:=sq(pv[i], pv[j]))<min:
                min=crn

print(sqrt(min))
