#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#define wfloat long double
#define fst static inline

#define EPSILON 1e-6
#define N (int)1e5

fst bool isint_l(wfloat n) { return (fabsl(n - roundl(n)) <= EPSILON); }


fst bool ispenta_l(wfloat n) {
  wfloat z = (1 + sqrtl(24 * n + 1)) / 6;
  return isint_l(z); 
}

fst bool istria_l(wfloat n){
  wfloat z = (sqrtl(8*n+1)-1)/2;
  return isint_l(z);
}

fst wfloat f(wfloat n) { return n * (2 * n - 1) ; }

int main() {
  for (wfloat x = 2; x < N; x++) {
    wfloat y = f(x);
    if(ispenta_l(y)&&istria_l(y)){
      printf("f(%Lf)=%Lf\n", x, y);
    }
  }
}
