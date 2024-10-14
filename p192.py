from fractions import Fraction as F
s = 0
for n in range(2, 100_000):
    x = F(1, 1)
    C = 10**12
    while (a:=F(x*x + n, 2*x)).denominator <= C:
        x=a
    s+=x.denominator
print(s)

        
