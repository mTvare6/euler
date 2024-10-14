N=600851475143
import math

flsqrt = lambda x: math.floor(math.sqrt(x))

def is_prime(n):
    for i in range(3, flsqrt(n)):
        if n % i == 0:
            return False

    return True

g = 0
for i in range(3, flsqrt(N)):
    if N % i == 0:
        h = N/i
        if i>g:
            if is_prime(i):
                g=i
        if h>g:
            if is_prime(h):
                g=h

print(g)
