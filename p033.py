def is_dcf(x, y):
    n = x//10
    m = x%10
    a = y//10
    b = y%10
    rt = x/y

    if 0 in [m, b]:
        return False

    r = [n/a,n/b,m/a,m/b]
    if (rt==r[0] and m==b) or (rt==r[1] and m==a) or (rt==r[2] and n==b) or (rt==r[3] and n==a):
        return True
    return False



for i in range(10, 99):
    for j in range(10, i):
        if is_dcf(i, j):
            print(f'{j}/{i}')

