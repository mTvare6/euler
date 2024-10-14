THRESHOLD=10**15
found =[]

def dsum(n:int)->int:
    s = 0
    while n>0:
        s+=n%10
        n//=10
    return s

for r in range(2,69):
    x=r
    while x < THRESHOLD:
        if dsum(x) == r:
            if x>9: found.append(x)
        x*=r
found.sort()
print(found[29])
