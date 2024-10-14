from primes import P
from math import sqrt

P.pop(0)
C = [j for j in (set(range(2, 10000)).difference(set(P))) if j&1]


E = 0.000001
is_int = lambda n: abs(n-round(n)) <= E

for oc in C:
    found = False
    for p in P:
        if oc>p:
            n = sqrt((oc-p)/2)
            if is_int(n):
                found = True
                break
    if not found:
        print(oc)
        break

