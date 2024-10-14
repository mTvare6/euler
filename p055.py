from functools import cache

@cache
def rev(n):
    s = 0
    while n>0:
        s+=n%10
        s*=10
        n//=10
    return s//10

@cache
def f(n):
    return n+rev(n)

for n in range(1, 10000):
    i = 1
    t = f(n)
    while i<50 and rev(t) != t:
        t = f(t)
        i+=1
    if i==50:
        print(n)


    

