#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

#define u32 uint32_t
#define uint u32

static inline uint nf(uint w) {
  uint s = 0;
  for(;w>0;s+=w/7,w/=7);
  return s;
}

static inline bool C(uint n, uint r) {
  return nf(n) > nf(r) + nf(n - r); 
}

#define N (uint)1e4
int main() {
  uint c = 0;
  for (uint n = 1; n < N; n++) {
    for (uint r = 0; r <= n / 2 - ((n & 1) ? 0 : 1); r++)
      if(!C(n, r))
        c += 2;

    if (!(n & 1) && !C(n, n / 2))
      c++;
  }
  printf("%u\n", c);
}
