p, c = 1, 2
n = 4
while True:
    if n*n % 4 == 1:
        c += 1
        p+= 1 if (1+n).bit_count() == 1 else 0
    if 12345*p < c:
        break
    n+=1
print(n)
