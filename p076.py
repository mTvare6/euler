from functools import cache


@cache
def sg(n):
    if n == 1:
        return 1
    s = n + 1
    i = 2
    while i * i < n:
        if (n % i) == 0:
            s += i + (n//i)
        i += 1
    if i * i == n:
        s += i
    return s


@cache
def p(n):
    if n==0: return 1
    return sum([sg(n - i) * p(i) for i in range(n)]) // n


print(p(100) - 1)
