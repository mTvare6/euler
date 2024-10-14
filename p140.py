from functools import cache


@cache
def f(n):
    if n < 3:
        return 1
    else:
        return f(n - 1) + f(n - 2)

i = 1
j = 3
k = 2
s = 0
s += k
k += j
s += k
for _ in range(14):
    i += 6
    j += f(i)
    k += j
    s += k
    i -= 2
    j += f(i)
    k += j
    s += k
print(s)


# gen from p140.c
'''
2       5       21      42      152     296     1050    2037    7205    13970   49392   95760
3       16      21      110     144     754     987     5168    6765    35422   46368
13      5       89      34      610     233     4181    1597    28657   10946 

7      5       11       9      15       13      19       ..
-2     +6       -2      +6 ..
'''
