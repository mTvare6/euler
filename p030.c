#include <stdio.h>
#include <stdlib.h>

#define wint long long

div_t d = {0, 0};
wint t = 0;

wint f(long long n) {
  wint s = 0;
  int g;
  while (n > 0) {
    d = div(n, 10);
    g = d.rem;
    n = d.quot;
    s += g * g * g * g * g;
  }
  return s;
}

int main(int argc, char *argv[]) {

  for (wint i=2; i < 1e8; i++) {
    if (f(i) == i) {
      t+=i;
    }
  }
  printf("t = %lld\n", t);
  return 0;
}
