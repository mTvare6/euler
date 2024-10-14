from itertools import chain, combinations
from functools import cache
from math import inf

def powerset(iterable):
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))

def l(n):
    s = []
    for i in range(2, n):
        if n%i==0:
            s.append([i] * (n//i))
    if not ( n==2 or n==4 or n==8 or n==16 or n==32 or n==64 or n==128):
        i = 1
        s.append([])
        while n >= i:
            if( n & i )==i:
                s[-1].append(i)
            i*=2
    return s + [ [k, n-k] for k in range(1, n//2+1) ]

@cache
def m(n):
    match n:
        case 1:
            return 0
        case _:
            v, x = inf, []
            for e in l(n):
                s = len(e) - 1 + sum([m(j) for j in set(e)])
                if v > s:
                    v=s
                    x = e
            print(x)
            return v

s = 0
for i in range(1, 201):
    print(f'm({i})={(y:=m(i))}')
    s+=y
print(s)
