from math import lcm

N=1
i=1
while i<21:
    N=lcm(N, i)
    i+=1

print(N)
