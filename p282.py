from functools import cache
import sys


@cache
def A(m, n):
    match m:
        case 0:
            return n+1
        case 1:
            return n+2
        case 2:
            return 2*n+3
        case 3:
            return 2**(n+3) - 3
        case _:
            if n==0:
                return A(m-1, 1)
            else:
                return A(m-1, A(m, n-1))

def main():
    s = 1
    for i in range(4, 5):
        s += A(i, i) %(14**8)

    print(s)

sys.setrecursionlimit(10**6)
import threading
threading.stack_size(2**26)
threading.Thread(target=main).start()
