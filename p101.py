u = lambda x: 1-x+x**2 -x**3 + x**4 - x**5 + x**6 - x**7 + x**8 - x**9 + x**10

p = [u(k) for k in range(1, 11)]
m = []
m.append(p)
s = sum(p)
while (l:=len(m[-1])) > 1:
    h = []
    for i in range(1, l):
        h.append(v:=(m[-1][i] - m[-1][i-1]))
        s+=v
    m.append(h)
print(s)
