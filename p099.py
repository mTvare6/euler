from math import log10

with open('./0099_base_exp.txt') as f:
    data = f.read().split('\n')[:-1]

maxv = 0
maxi = 0
for id, l in enumerate(data, start=1):
    e = [int(j) for j in l.split(',')]
    if (y:= e[1]*log10(e[0])) > maxv:
        maxv = y
        maxi = id

print(f'{maxi}: {data[maxi-1]}')
