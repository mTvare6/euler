#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#define wfloat long double
#define fst static inline

#define EPSILON 1e-4
#define N (int)1e6

fst bool isint_l(wfloat n) { return (fabsl(n - roundl(n)) <= EPSILON); }

fst wfloat ixpenta(wfloat n) { return (1 + sqrtl(24 * n + 1)) / 6; }

fst bool ispenta_l(wfloat n) { return isint_l(ixpenta(n)); }

fst wfloat f(wfloat n) { return n * (3 * n - 1) / 2; }

int main() {
  for (wfloat i = 1; i < N; i++) {
    for (wfloat j = 1; j < i; j++) {
      wfloat d = f(i) - f(j);
      wfloat s = f(i) + f(j);
      if (ispenta_l(d) && ispenta_l(s)) {
        printf("(%Lf, %Lf) = %Lf\n", i, j, d);
        return 0;
      }
    }
  }
}
