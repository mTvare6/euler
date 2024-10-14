#include <stdio.h>
#include <stdbool.h>
#define N ((int)1e8)
#define none(e) (((e) & 1) ? (-1) : (1))

int main() {
  bool m[N + 1] = {false};
  unsigned long long s = 0;
  int l;

  for (int i = 2; i < N; i++) {
    if (m[i])
      continue;
    int x = N / i;
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }

  for (int p = 5; p < N; p++) {
    if (!m[p]) {
      for (l = 0; (9 * none(p) + l * p) % (24) != 0; l++);
      s += (9 * none(p) + l * p) / (24);
    }
  }

  printf("%llu\n", s);
  return 0;
}
