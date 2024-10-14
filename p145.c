#include <stdbool.h>
#include <stdio.h>

#define wint unsigned long

static inline wint rev(wint n) {
  wint s = 0;
  while (n > 0) {
    s += n % 10;
    s *= 10;
    n /= 10;
  }
  return s / 10;
}

int main() {
  wint b;
  bool y;
  int count=0;
  for (wint i = 1; i < (wint)1e9; i++) {
    b = i + rev(i);
    y = false;
    if (i % 10 != 0) {
      for (b = i + rev(i); b > 0; b /= 10) {
        if (b % 2 == 0){
          y = true;
          break;
        }
      }
      if (!y) count++;
    }
  }

  printf("%d", count);
}
