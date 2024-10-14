from itertools import permutations
N = int(1e6)
print(sorted([int(''.join(j))  for j in permutations('1234567890')])[N-1])

