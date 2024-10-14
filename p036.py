log = print
p = lambda x: x==x[::-1]
n=1
s=0
while n<1e6:
    if p(str(bin(n))[2:]) and p(str(n)):
        s+=n
    n+=1
print(s)
