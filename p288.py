p = 5
a = 290797
a = a%p

N = 0
q = 10

rp = 1
ra = a
for n in range(q+1):
    N += (ra)*rp
    ra = (ra*ra)%p
    rp *= p

c = 0
while N>0:
    N//=p
    c+=N
c%=3**20

print(c)
