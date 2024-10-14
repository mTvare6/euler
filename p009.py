EPSILON = 0.0001
is_int = lambda x: abs(x-round(x))<=EPSILON

for m in range(1, 23):
    n = (500/m - m)
    if(m>n):
        if is_int(n):
            n = int(n)
            m = int(m)
            a = m*m - n*n
            b= 2*m*n
            c = m*m+n*n
            print(a*b*c)
