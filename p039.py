from math import sqrt, ceil, floor
E = 0.000001

def is_int(n):
    return abs(n-round(n)) <= E

h = {}

for p in range(25, 1001):
    i = 0
    M = [False] * 1000
    for q in range( ceil(p/4), floor(p/2)+1  ):
        m = sqrt(q)
        n = p/2/m - m 
        j = [m**2 - n**2, 2*m*n, m**2+n**2]
        j.sort() 
        if all(map(is_int, j)):
            j = ([round(p) for p in j])
            if j[0] != 0:
                if not M[j[0]]:
                    i+=1
                M[j[0]] = True
    if i>=4:
        h[p] = i

max = [0, 0]
for key in (h):
    if h[key] > max[1]:
        max[0] = key
        max[1] = h[key]

print(max)
