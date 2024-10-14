sq = set()

for i in range(1, int(1e3)):
    sq.add(i*i)


def f(n):
    j = []
    b = 2
    while b*b < n:
        if n%b==0:
            j.append(b)
            j.append(n//b)
        b+=1
    if b*b == n: j.append(b)
    return j

ssq = set()
for i in sq:
    for j in sq:
        ssq.add(i+j)

