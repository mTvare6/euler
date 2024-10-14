import math
N = 1000
print((sk := lambda n: n*(nk := math.ceil(N/n) -1)*(nk+1)/2)(3) + sk(5) - sk(15))
