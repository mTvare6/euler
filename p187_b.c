#include <stdbool.h>
#include <stdio.h>
#define N ((int)1e8)
#define RTN ((int)1e4)
bool m[(int)N + 1] = {false};
unsigned int pi[(int)N + 1] = {0};

#define wint unsigned long long
int main() {
  wint cp = 0;
  for (int i = 2; i < N; i++) {
    if (m[i]) {
      pi[i] = cp;
      continue;
    }

    pi[i] = ++cp;

    int x = N / i;
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }

  cp = 0;
  for( int i=2;i<RTN;i++ ){
    if(!m[i]){
      cp+=1+pi[N/i]-pi[i];
    }
  }

  printf("%llu\n", cp);



}
