// too slow, around 3m
#include <stdio.h>
#define uint unsigned int
int main() {
  uint n, a, c, b;
  uint cm = 0;

  for (n = 2; n < (int)5e6;n++) {
    c = 0;
    for (a = 1; a * a < n && c < 2; a++) {
      if (n % a == 0) {
        b = n / a;
        if (!((b + a) % 4)) {
          c += (b < 3 * a) + (a < 3 * b);
        }
      }
    }
    if (a * a == n && !(a % 2)) {
      c++;
    }
    if (c == 1) {
      cm++;
    }
  }

  printf("%u\n", cm);
}
