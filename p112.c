#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define u8 uint8_t
#define wint int

static inline bool is_bouncy(wint n) {
  bool a = false, b = false;
  u8 d = n % 10;
  n /= 10;
  for (u8 td; n > 0; n /= 10) {
    td = n % 10;
    if (td > d) a = true;
    if (td < d) b = true;
    if (a && b)
      return true;
    d = td;
  }
  return false;
}

int main() {
  wint count, i;
  for(i=101, count = 0; (((double)count+1)/i) < 0.99; i++,count+=is_bouncy(i));
  printf("%d", i);
}
