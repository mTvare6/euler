n_max = 0
n_ind = 0
for i in range(4, 1_000_000):
    j=i
    h=0
    while j!=1:
        if j%2==0:
            j/=2
        else:
            j=3*j+1
        h+=1
    if h>n_ind:
        n_ind=h
        n_max=i

print(n_max)
