from itertools import permutations

N = 10_000
m = [True] * (N+1)
m[0] = False
m[1] = False



for i in range(2, N):
    c = N//i
    for h in range(2, c):
        m[h*i] = False



f = [False] * (N+1)


for h in range(1111, 9999):
    v = 0
    if not f[h] and m[h]:
        s = str(h)
        if not '0' in s:
            pm = (list(set  (filter(lambda x: m[x], [int(''.join(p)) for p in permutations(s)])   )))
            for b in pm:
                f[b] = True
            n = len(pm)
            if n >= 3:
                for i in range(0, n):
                    for j in range(i+1, n):
                        if(abs(pm[i]-pm[j])==3330):
                            v+=1
                if(v==2):
                    print(h, pm , sep="->")


