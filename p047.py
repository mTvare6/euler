from functools import cache
import sys

@cache
def f(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return len(set(factors))

i = 2
while True:
    if f(i)==4 and f(i+1)==4 and f(i+2)==4 and f(i+3)==4:
        print(i)
        sys.exit(0)
    i+=1
