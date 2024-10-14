from itertools import combinations, chain
def powerset(iterable):
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))

N = 35
print(len(list(filter(lambda tl: sum(tl) == 0.5, powerset(map(lambda x: 1/x/x, range(2, N+1)))))))
