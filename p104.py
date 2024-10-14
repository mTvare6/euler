from itertools import permutations
import math

d = lambda n: math.floor(math.log10(n))+1
p = set([int(''.join(j)) for j in permutations('123456789')])
i=1

f = [1, 0, 1]
while True:
        f[2] = f[0]+f[1]
        f[0],f[1] = f[1],f[2]
        if f[2]%10**9 in p and f[2]//(10**(d(f[2])-9)) in p:
            print(i)
            break
        i+=1

