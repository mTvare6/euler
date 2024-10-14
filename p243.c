#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

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

int main(){
  for(wint n = 2;;n++){
    if( 94744 * phi(n) < 15499 * (n-1)){
      printf("phi(%llu)=%llu\n", n, phi(n));
      break;
    }
  }
}
