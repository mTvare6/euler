from fractions import Fraction as F
v = []

for d in range(2, int(1e6)+1):
    i = 3*d//7
    v.append(F(i, d))
v=list(set(v))
v.sort()
print(v[-2])



'''
N = int(1e6)
e = (N)//7
print( 3*e - 1 )
'''
