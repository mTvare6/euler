#include <math.h>
#include <string.h>
#include <stdio.h>

#define n 200
#define N 200

#define f(k) expm1(k / n)
#define e(a, b, c, d)                                                          \
  fabs(f((double)a) + f((double)b) + f((double)c) + f((double)d) - M_PI)

int main() {
  double min = INFINITY;
  int w[4] = {0};
  for (int a = 0; a < N; a++) {
    for (int b = 0; b < N; b++) {
      for (int c = 0; c < N; c++) {
        for (int d = 0; d < N; d++) {
          if (e(a, b, c, d) < min) {
            min = e(a, b, c, d);
            printf("%f\n", min);
            w[0] = a;
            w[1] = b;
            w[2] = c;
            w[3] = d;
          }
        }
      }
    }
  }


  printf("%d %d %d %d\n", w[0], w[1], w[2], w[3]);
}
