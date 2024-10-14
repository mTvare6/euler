#include <stdio.h>
#define wint unsigned long long
int main(){
  wint y;
  int c = 0;
  for(wint m=1;c<15;m++){
    for(wint n=1;n<m;n++){
      if( n*n + (y=m*n) + 1 == m*m ){
        printf("%d:\t%llu\n", ++c, y);
      }
    }
  }
}

// 1120149658760
// 7 mins
