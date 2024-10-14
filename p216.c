#include <stdbool.h>
#include <stdio.h>

#define wint unsigned long
static inline bool is_prime(wint n){
  if(n%2==0) return false;
  for(int i=3;i*i<=n;i+=2) if(n%i==0) return false;
  return true;
}

static inline wint f(int n){
  return 2*n*n - 1;
}

#define N 5e7
#define D 7071
#define K 959
int main() {
  wint c=0;
  bool ls[D] = {false};

  for(int i = 2;i<=(int)N;i++){
    printf("%lu\n", f(i));
    if(is_prime(f(i))) c++;
  }
  printf("%lu", c);
}
