from fractions import Fraction as F

def inc(g):
    return F(1, 2+g)

h = F(1, 2)

N= 1000
c=0
for i in range(1, N+1):
    c+=len(str(h.numerator+h.denominator))>len(str(h.denominator))
    h=inc(h)
print(c)
