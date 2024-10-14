from dataclasses import dataclass
from math import log10 as log

@dataclass
class Num:
    a:int
    b:int
    c:int

' n = 2^(1+a) 7^b 11^c '

I = 10

m:list[Num] = []
N = 10
ir = int(N/log(2))
jr = int(N/log(7))
kr = int(N/log(11))
for i in range(1, ir):
    for j in range(1, jr):
        for k in range(1, kr):
            m.append(Num(i, j, k))


m.sort(key=lambda n: log(2) * (1+n.a) + log(7) * n.b + log(11) * n.c )
# e:Num = m[I-1]
for e in m:
    print(2**(e.a + 1)*7**(e.b)*11**(e.c))
