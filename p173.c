#include <stdio.h>

#define eq_parity(a, b) (!(((a) ^ (b)) & 1))
#define uint unsigned int

int main() {
  uint N, c;
  uint a, b, W, w;

  c = 0;
  for (N = 2; N <= (int)1e6; N+=2) {
    for (a = 2; a * a < N; a++) {
      if ((N % a) == 0) {
        b = N / a;
        if (eq_parity(a, b)) {
          W = (a + b) / 2;
          w = (a - b) / 2;
          if (eq_parity(w, W)) {
            c++;
          }
        }
      }
    }
  }

  printf("%u", c);
}
