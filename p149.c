#include <stdio.h>

#define W (2000)
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define IN(k) (((k) + 2) < W)
#define SMAX(max, v) {max=MAX(max, v);}

long s[W][W] = {0};

#define MOD ((int)1e6)

static inline long get_n(size_t n) { return s[(n - 1) / W][(n - 1) % W]; }

static inline void set_n(size_t n, long w) { s[(n - 1) / W][(n - 1) % W] = w; }

int main() {
  for (size_t k = 1; k <= 55; k++) {
    s[0][k - 1] = (100003 - 200003 * k + 300007 * k * k * k) % MOD - 500000;
  }

  for (size_t k = 56; k < W * W; k++) {
    set_n(k, (get_n(k - 24) + get_n(k - 55) + MOD) % MOD - 500000);
  }

  long max=0;
  for (size_t i = 0; i < W; i++) {
    for (size_t j = 0; j < W; j++) {
      if (IN(j))
        SMAX(max, s[i][j] + s[i][j + 1] + s[i][j + 2])
      if (IN(i)) {
        SMAX(max, s[i + 2][j] + s[i + 1][j] + s[i][j])
        SMAX(max, s[i][j] + s[i + 1][j - 1] + s[i + 2][j - 2])
        if(IN(j)) SMAX(max, s[i][j] + s[i + 1][j + 1] + s[i + 2][j + 2])
      }
    }
  }
  printf("%ld\n", max);
}
