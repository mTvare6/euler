from math import factorial
C = lambda n, r: factorial(n)//factorial(r)//factorial(n-r)


k = 0
for n in range(23, 101):
    if n&1:
        k+=2
        r = (n+3)//2
    else:
        k+=1
        r = n//2 + 1
    while C(n, r) > 1_000_000:
        k+=2
        r+=1

print(k)
