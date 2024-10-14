def f(n):
   r = 0
   while n:
       r, n = r + n % 10, n // 10
   return r

max = 0
for a in range(1, 100):
    if a%10==0:
        continue
    for b in range(1, 101):
        i = f(a**b)
        if i > max:
            max = i
print(max)
