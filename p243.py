N = 1000000
import collections
factors = [set() for _ in range(N)]
d = [1 for _ in range(N)]
factored = collections.defaultdict(set)
for n in range(2, N):
    if not factors[n]:           # no factors yet -> n is prime
        for m in range(n, N, n): # all multiples of n up to N
            factors[m].add(n)
            d[m]*=(n-1)
            factored[n].add(m)

for n in range(2, N):
    if 94744*d[n] < 15499*(n-1):
        print(n)
        break
