#include <stdbool.h>
#include <stdio.h>

#define N ((int)2e6)

int main() {
  bool m[N + 1] = {false};
  long long s = 0;

  for (int i = 2; i < N; i++) {
    if (m[i]) continue;

    s += i;
    int x = N / i;
    for (int h = 2; h <= x; h++)
      m[(h * i)] = true;

  }
  printf("%lld\n", s);
  return 0;
}
