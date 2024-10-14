#define N (int)1e6

#include <stdbool.h>
#include <stdio.h>
#include <string.h>


bool beq(bool *a, bool *b){
  for(int i=0;i<10;i++)
    if( a[i]!=b[i] ) return false;
  return true;
}

static bool b[N][10];

int main(){
  int c;
  for(int i=1;i<N;i++){
    memset(b[i], 0, sizeof(b[0]));
    for(c=i;c>0;c/=10){
      b[i][(c%10)] = true;
    }
  }

  for(int i=1;i<N/6;i++){
    if(
      beq(b[i], b[2*i]) &&
      beq(b[i], b[3*i]) &&
      beq(b[i], b[4*i]) &&
      beq(b[i], b[5*i]) &&
      beq(b[i], b[6*i])
    ) printf("%d\n", i);
  }
}

