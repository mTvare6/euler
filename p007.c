#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define N 1e6

int main() {
  bool m[(int)N + 2] = {false};
  int j=0;

  for (int i = 2; i < N; i++) {
    if (m[i]) continue;
    j++;
    if(j==10001){
      j=i;
      break;
    }
    int x = floorf(N / i);
    for (int h = 1; h <= x; h++) {
      m[(h * i)] = true;
    }
  }
  printf("%d", j);
  return 0;
}
