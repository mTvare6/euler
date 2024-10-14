#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define W ((uint)1e8)
#define N (10*W)
#define uint unsigned long long

bool m[N + 1] = {false};
static inline bool f(uint w) {
  uint c=(sqrt(w));
  if(c*c==w) return false;
  for(uint a=1;a<=c;a++)
    if(!(w%a))
      if(m[a+w/a]) return false;
  return true;
}

int main() {
  for (uint i = 2; i < N; i++) {
    if (m[i]) continue;
    uint x = N / i;
    for (uint h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }

  uint s=2;
  for(uint n=3;n<=W;n++){
    if(m[n] && f(n)){
      s+=n;
    }
  }
  printf("%llu\n", s);

}
