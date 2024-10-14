from itertools import permutations
cubes = set()

for i in range(1, 10000):
    if i%10:
        cubes.add(i*i*i)

for c in cubes:
    n = 0
    for t in (p:=set(permutations(str(c)))):
        e = int(''.join(t))
        if e in cubes:
            n+=1
    if n>=4:
        for t in p:
            e = int(''.join(t))
            if e in cubes:
                print(e, end=' ')
        print()
