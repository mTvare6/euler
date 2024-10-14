#include <stdbool.h>
#include <stdio.h>

#define wint unsigned long long

static inline wint phi(wint n){
  wint nc = n;
  for(wint x=2;x*x<=n;x++){
    if(n%x==0){
      nc/=x;
      nc*=(x-1);
      while(n%x==0) n/=x;
    }
  }
  if(n!=1) nc*=(n-1),nc/=n;
  return nc;
}

#define N (int)1e6
int main(){
  wint s = 0;
  for(int d=2;d<=N;d++)
    s+=phi(d);
  printf("%llu\n", s);
}
