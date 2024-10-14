from itertools import permutations
from functools import reduce
with open("./0079_keylog.txt") as fl:
    data = fl.read().split('\n')[:-1]

data.sort()
for i, x in enumerate(data):
    if x==data[i-1]:
        del data[i]

def f(s, ss):
    max = -1
    for l in ss:
        i = s.index(l)
        if i>max:
            max = i
        else:
            return False
    return True

j = (''.join(k for k in set(reduce(lambda x,y: x+y, data))))


perms = list(set([''.join(p) for p in permutations(j)]))
for e in perms:
    show=True
    for ss in data:
        if not f(e, ss):
            show=False
            break

    if show: print(e)
