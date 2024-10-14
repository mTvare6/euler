s = 0
N = 1000

for i in range(1, N+1):
    s += pow(i, i, 10**10)

print(str(s)[-10:])
