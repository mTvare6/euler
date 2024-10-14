#include <stdio.h>
#define uint unsigned long long

static inline uint d(uint n){
  uint s=  0,d;
  for(;n>0;d=(n%10),s+=d*d,n/=10);
  return s;
}

int main(){
  uint c,s=0;
  for(uint i=2;i<(uint)1e7;i++){
    c = i;
    for(;c!=89 && c!=1;c=d(c));
    if(c==89) s++;
  }
  printf("%llu\n", s);
}
