from itertools import combinations
v = [2, 5]
for _ in range(10**3):
    vbar = sorted(list(map(lambda m:m[0]+m[1], combinations(v, 2))))
    for e in vbar:
        if vbar.count(e) == 1 and not v.count(e):
            v.append(e)
            break;
print(v)
