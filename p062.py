cubes = set()
for i in range(1, 10_000):
    cubes.add(i*i*i)
from itertools import permutations

i = 1
die = False

permprev = set()

while not die:
    i+=1
    if not i in permprev:
        permprev.add(i)
        c = 0
        found = set()
        for j in permutations(str(i)):
            if not j in found:
                found.add(j)
                permprev.add(j)
                k = int(''.join(j))
                if k in cubes:
                    c+=1
                if c==3:
                    die = True

        if die:
            found = set()
            for j in permutations(str(i)):
                if not j in found:
                    found.add(j)
                    k = int(''.join(j))
                    if k in cubes:
                        print(k, end="\t")
            print(i)
            die = False
