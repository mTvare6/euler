#include <stdbool.h>
#include <stdio.h>

#define N ((int)50)

/*
  *  n/phi(n) = prod[ p/(p-1) ]
  *  for max n, ran(n) = n, ie n = p1*p2*p3 without pow
  *  so multiply primes
*/

int main() {
  bool m[(int)N + 1] = {false};
  unsigned long long p = 1;

  for (unsigned long long i = 2; i < N; i++) {
    if (m[i]) continue;

    if(p*i<(int)1e6) p*=i;
    else {
      printf("%llu\n", p);
      return 0;
    }
    int x = N / i;
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }

  }
}
