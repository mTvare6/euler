from math import factorial
i=3
N=1e5
k = 0
while i<N:
    s = 0
    j = i
    while j>0:
        d = j%10
        j//=10
        s+=factorial(d)
    if i == s:
        print(i)
        k+=s
    i+=1

print(k)
