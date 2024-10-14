#include <math.h>
#include <stdio.h>
#define uint unsigned long long

int main() {
  uint s = 0, m = 0;
  for (uint n = 1; m != 10; n++)
    s += 10 - (m = ceil(pow(10, (float)(n - 1) / n)));
  printf("%llu\n", s);
}
