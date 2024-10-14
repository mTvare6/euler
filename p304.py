def is_prime_odd(n):
    i=3
    while i*i <= n:
        if n%i==0:
            return False
        i+=2
    return True

def next_prime(n):
    n+= 2 if (n&1) else 1
    while True:
        if is_prime_odd(n): return n
        n+=2
import math
s5 = math.sqrt(5)
phi = (1+s5) / 2

from functools import cache

@cache
def f(n):
    if n<3:
        return 1
    return (f(n-1) + f(n-2)) % 1234567891011
a1 = 100000000000031

for _ in range(int(1e5)):
    print(a1:=next_prime(a1))
