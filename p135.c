#include <stdio.h>
#define uint unsigned int
int main() {
  uint n, a, c, b;
  uint cm = 0;

  for (n = 1155; n < (int)1e6; n++) {
    c = 0;
    for (a = 1; a * a < n; a++) {
      if (n % a == 0) {
        b = n / a;
        if ((n < 3 * a * a) && !((n / a + a) % 4))
          c++;
        if ((n < 3 * b * b) && !((n / b + b) % 4))
          c++;
      }
    }
    if (a * a == n && !(a % 2)) {
      c++;
    }
    if (c == 10)
      cm++;
  }

  printf("%u\n", cm);
}
