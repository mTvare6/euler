from math import log2 as log, prod

P = {
    2: 0,
    3: 0,
}

w = 500500
# np + 1 = 2^(kp)

for k, v in P.items():
    P[k] = w // len(P)


def H() -> int:
    return sum([log(log(p))*kp for p, kp in P.items()])


def W() -> bool:
    return sum(kp for _, kp in P.items()) == w


def S():
    print(prod([p ** (2**kp - 1) for p, kp in P.items()]))
