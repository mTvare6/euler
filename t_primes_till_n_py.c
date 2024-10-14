#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define N 1e6

int main() {
  bool m[(int)N + 1] = {false};
  printf("int P[] = {");
  for (int i = 2; i < N; i++) {
    if (m[i]) continue;
    printf("%d, ", i);
    int x = floorf(N / i);
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }
  printf("};");
  return 0;
}
