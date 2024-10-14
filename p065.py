from fractions import Fraction as f

N = 100

'''
[1, 2, 1;
 1, 4, 1;
 .......
 1, 2k,1]

''' 


j = [0] * (N+1)

for i in range(1, N+1):
    if i%3 in [0, 1]:
        j[i]= 1
    else:
        j[i] = 2*(i//3 + 1)

s = f(0)
for i in range(N-1, 0, -1):
    s = f(1, j[i]+s)

e = (2+s)
n = e.numerator

sn = 0
while n > 0:
    sn+=n%10
    n = n//10
print(sn)

