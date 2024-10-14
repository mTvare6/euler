#include <stdio.h>
#define uint unsigned long long
#define N 1000000000000ull
#define M 100000ull
int main(){
  uint p = 1;

  for(uint i=2;i<=N;i++){
    p =  p*i;
    while(p%10==0) p/=10;
    p%=M;
  }

  printf("%llu\n", p);
}
