from math import factorial 

move = lambda x: factorial(2*x)/(factorial(x)**2)
print(move(20))
