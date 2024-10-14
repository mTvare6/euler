from functools import cache

Y = 10**9
@cache
def f(n):
    if n == 0:
        return 0
    while((n%2)==0):
        n//=2
    if n==1:
        return 1
    match n&3:
        case 1:
            return (2 * f((n + 1) // 2) - f((n - 1) // 4) )%Y;
        case 3:
            return (3 * f((n - 1) // 2) - 2*f((n - 3) // 4) )%Y;

@cache
def S(n):
    if (n<3): return n;
    h = (n-3)%4
    s = (6*S(2 * ((n-3)//4) + 1) - 8*S((n-3)//4) -1)%Y
    match h:
        case 0:
            return s;
        case 1:
            return s+f(n);
        case 2:
            return s+f(n)+f(n-1);
        case 3:
            return s+f(n)+f(n-1)+f(n-2);

print(S(3**37))
