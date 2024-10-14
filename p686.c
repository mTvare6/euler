#include <math.h>
#include <stdio.h>
#define uint unsigned long long
const uint n = 3;
int main() {
  uint c = 0,b;
  double x, y;
  for (b = 1; c < 678910; b++) {
    x = b * log10(2);
    y = floor(pow(10, x - floor(x) + n - 1));
    if ((int)y == 123)
      c++;
  }
  printf("%llu\n", b-1);
  return 0;
}
