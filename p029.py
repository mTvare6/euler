g = []
N = 100
for i in range(2, N+1):
    for j in range(2, N+1):
        p = i**j
        if not p in g:
            g.append(p)

print(len(g))
