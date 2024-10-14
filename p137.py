f = lambda n: 1 if n<3 else f(n-1) + f(n-2)
print((lambda n: f(2*n) * f(2*n+1))(15))
