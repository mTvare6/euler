#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#define LIMIT 2000
#define N (LIMIT * LIMIT) + 1000 * LIMIT + 997

int f(int a, int b, int n){
  return b + a*n + n*n;
}

int main() {
  bool m[(int)N + 2] = {false};
  for (int i = 2; i < N; i++) {
    if (m[i])
      continue;
    int x = floorf(((float)N) / i);
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }

  int g[] = {1, 41, 40};
  int i, y;
  for (int b = 2; b < 1000; b++) {
    if (m[b]) continue;
    for (int a = -1000; a <= 1000; a++) {
      for(i=1;;i++){
        y = f(a, b, i);
        if(y<0 || m[y]) break;
      }
      if(i>g[2]){
        g[2]=i;
        g[1]=b;
        g[0]=a;
      }
    }
  }
  printf("(a:b:i)=(%d:%d:%d)\n", g[0], g[1], g[2]);
  return 0;
}
