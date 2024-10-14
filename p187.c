#include <stdbool.h>
#include <stdio.h>
#define N ((int)1e8)
bool m[(int)N + 1] = {false};

#define wint unsigned long long
static inline bool pk(wint n) {
  wint b, a;
  for (a = 2; a * a <= n; a++) {
    if (n % a == 0) {
      b = n / a;
      if (m[a] || m[b])
        return false;
      else
        return true;
    }
  }
  return false;
}

int main() {

  for (int i = 2; i < N; i++) {
    if (m[i])
      continue;
    int x = N / i;
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }

  wint c = 0;
  for (wint a = 2; a < N; a++) {
    if (pk(a))
      c++;
  }
  printf("%llu\n", c);
}
