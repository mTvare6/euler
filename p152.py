# from fractions import Fraction as frac
# log = print
mm = lambda l: sum([(1/(j*j)) for j in l])

from itertools import combinations, chain





def powerset(iterable):
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))

N = 45
for e in powerset(range(2, N+1)):
    if (mm(e)==0.5):
        print(e)




