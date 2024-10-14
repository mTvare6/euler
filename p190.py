from math import prod, floor, pow
def P(m):
    return prod([k**k for k in range(1, m+1)]) * pow(2/(m+1), m*(m+1)//2)
print(sum([floor(P(m)) for m in range(2, 16)]))
