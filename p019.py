m = [
    3,
    0,
    3,
    2,
    3,
    2,
    3,
    3,
    2,
    3,
    2,
    3,
]

def is_leap(j):
    if j==2000:
        return True
    elif j%100==0:
        return False
    elif j%4==0:
        return True
    else:
        return False

d=0
s=-2 # 1900 has 2 *
for j in range(1900, 2001):
    for i in range(0, 12):
        if d==6: s+=1
        if i!=1:
            d+=m[i]
        else:
            d+=int(is_leap(j)==True)
        d%=7

print(s)
