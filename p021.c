#include <stdio.h>

int d(int i) {
  int j = 1;
  for (int b = 2; b*b <= i; b++) 
    if (i % b == 0) j += (b * b == i) ? b : (b + i / b);
  return j;
}

int main(){
  int s = 0;
  for(int i=2;i<(int)1e4;i++){
    if( i!=d(i) && i == d(d(i))) s+=i;
  }
  printf("%d", s);
}
