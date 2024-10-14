from math import nan, sqrt, floor
N=28123
k = [nan, 1]
for i in range (2, N+1):
    j = 1
    n = floor(sqrt(i))
    for b in range(2, n+1):
        if i%b==0:
            if b*b != i:
                j+=b + (i//b)
            else:
                j+=b

    k.append(j)

v = set()
for i, ki in enumerate(k):
    if ki > i:
        v.add(i)
asums = set()
for i in v:
     for j in v:
        if (y:= i+j) < N:
         asums.add(y)

print(sum(set(range(1, N+1)).difference(asums)))

