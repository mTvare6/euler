N = 10
u = lambda n: (n**11+1)/(n+1)


def f(l):
    s = 0
    for xi, u in enumerate(l, start=1):
        for xj in range(1, (n := len(l)) + 1):
            if xj != xi:
                u = u * (n + 1 - xj) / (xi - xj)
        s += u
    return s


l = [u(k) for k in range(1, N + 1)]

print(round(sum(f(l[:i]) for i in range(1, N + 1))))
