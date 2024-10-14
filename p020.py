from math import factorial

t = factorial(100)
s = 0
while t>0:
    s+=t%10
    t//=10
print(s)
