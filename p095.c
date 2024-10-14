#include <stdio.h>

#define N (int)1e6



int d(int i) {
  int j = 1;
  for (int b = 2; b*b <= i; b++) 
    if (i % b == 0) j += (b * b == i) ? b : (b + i / b);
  return j;
}


int main(){
  int id[N] = {0};
  for(int i=2;i<N;i++){
    id[i] = d(i);
  }

  int c;
  int v;
  for(int i=2;i<N;i++){
  for(c=id[i],v=1; !(i==c||id[c]>=N||c==id[c]);c=id[c],v++){
    printf("%d\t", c);
  }
    if(c==i) printf("%d: %d\n", i,  v);
  }


}
