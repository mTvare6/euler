import time

def is_palin(N):
    n=N
    s=0
    while n>0:
        s*=10
        s+=n%10
        n=n//10
    return N==s

p=0
i = 999
con = True
b=[]
while con:
    i-=1
    j=999
    while j>i and con:
        p = i*j
        if is_palin(p): b.append(p)
        j-=1
        if(i==100): con=False

v=(sorted(b))
print(v)
