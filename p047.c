#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#define N 1e6

int main(int argc, char **argv) {

  bool m[(int)N + 2] = {false};
  for (int i = 2; i < N; i++) {
    if (m[i]) continue;
    int x = floorf(N / i);
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }

  int j;
  int k=0;
  for (int i = 2; i < N; i++) {
    j = 0;
    int n = floorf(sqrt(i));
    for (int b = 2; b <= n; b++)
      if (i % b == 0){
      if(b*b==i) j+=!(m[b]);
      else       j+=(!m[b] + !m[i/b]);
    }
    if(j==4) k++;
    else k = 0;

    if(k==4){
      printf("%d", i-3);
      return 0;
    }
  }

}
