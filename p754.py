from functools import cache
from math import gcd, prod

@cache
def g(n):
    return prod([i for i in range(2, n) if gcd(i, n)==1])
            

