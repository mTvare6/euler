L = 123
THRESHOLD = 678910
v = 1.
c = 0
while THRESHOLD > 0:
    v *= 2
    c += 1
    if v > 1000: v /= 10
    if int(v) == L:
        THRESHOLD -= 1
print(c)
