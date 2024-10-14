#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define N 1e6
bool m[(int)N + 1] = {false};

static inline int rev(int n){
  int h = 0, d;
  while(n>0){
    h+=n%10;
    h*=10;
    n/=10;
  }
  return h/10;
}

bool is_f(int n){
  int r = rev(n);

  while(n>0){
    if(m[n]) return false;
    n/=10;
  }
  while(r>0){
    if(m[rev(r)]) return false;
    r/=10;
  }
  return true;
}

int main() {
  m[1] = true;
  for (int i = 2; i < N; i++) {
    if (m[i]) continue;
    int x = floorf(N / i);
    for (int h = 2; h <= x; h++) {
      m[(h * i)] = true;
    }
  }

  int s= 0;
  for(int i=23;i<N;i++){
    if(is_f(i)) s+=i;
  }
  printf("%d", s);




  return 0;
}
