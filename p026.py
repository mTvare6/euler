x = [7, 6]
for j in range(13, 1000, 2):
    if j%5==0:
        continue
    m = []
    n = 10
    m.append(1)
    h = []
    while n>0:
        h.append(n//j)
        n%=j
        if n in m:
            if (g:=len(h[m.index(n):])) > x[1]:
                x[0] = j
                x[1] = g
            break
        m.append(n)
        n*=10
print(x[0])
