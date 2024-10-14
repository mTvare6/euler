from functools import cache
from math import ceil, prod

@cache
def f(n):
    return 9 * n * 10**(n-1)

@cache
def F(n):
    return sum([ f(k) for k in range(1, n+1) ])


def atC(N:int):
    d = 1
    while N - F(d) > 0:
        d+=1
    alpha = d-1

    w = N - F(alpha)
    D = ceil(w/d)

    n = 10**alpha + D - 1
    p = (w-1)%d

    return int(str(n)[p])

print(prod([atC(10**k) for k in range(0, 6+1)]))
