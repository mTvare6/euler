#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool has[10] = {false};
int d;
int c;
static bool do_they(int a, int b){
  memset(has, 0, sizeof(has));
  c = a*b;


  while (a > 0) {
    d = a % 10;
    if (d==0) return false;
    if (has[d])
      return false;
    a /= 10;
    has[d] = true;
  }

  while (b > 0) {
    d = b % 10;
    if (d==0) return false;
    if (has[d])
      return false;
    b /= 10;
    has[d] = true;
  }

  while (c > 0) {
    d = c % 10;
    if (d==0) return false;
    if (has[d])
      return false;
    c /= 10;
    has[d] = true;
  }

  return
  has[1] &&
  has[2] &&
  has[3] &&
  has[4] &&
  has[5] &&
  has[6] &&
  has[7] &&
  has[8] &&
  has[9];

}



#define N (int)1e4
// ./main | uniq > a

int main(){
  for(int i=2; i<N; i++){
    for(int j=2; j<N; j++){
      if(do_they(i, j)) printf("%d\n", i*j);
    }
  }
}
