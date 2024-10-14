from math import sqrt, floor
f = lambda x: x*(x+1)//2


go = True
k=2
while go:
    i = f(k)
    n = floor(sqrt(i))
    j = 2
    for b in range(2, n+1):
        if i%b==0:
            j+= 1 if b*b==i else 2
    if j>500: go=False
    k+=1

print(f'f({k-1})={f(k-1)}')
