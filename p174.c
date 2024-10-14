#include <stdio.h>

#define eq_parity(a, b) (!(((a) ^ (b)) & 1))
#define uint unsigned int
#define N ((int)1e6)

int main() {
  uint n, c;
  uint a, b, W, w;

  uint cm;

  for (n = 2; n <= (int)1e6; n += 2) {
    c = 0;
    for (a = 2; a * a < n; a++) {
      if ((n % a) == 0) {
        b = n / a;
        if (eq_parity(a, b)) {
          W = (a + b) / 2;
          w = (a - b) / 2;
          if (eq_parity(w, W)) {
            c++;
          }
        }
      }
    }
    if(0<c && c<11) cm++;
  }

  printf("%u\n", cm);
}
