#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool has[10] = {false};
int d;
static bool do_they(int *m, size_t n){
  memset(has, 0, sizeof(has));
  for(int i=0;i<n;i++){
    while (m[i] > 0) {
      d = m[i] % 10;
      if (d==0) return false;
      if (has[d])
        return false;
      m[i] /= 10;
      has[d] = true;
    }
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



int main(){
  for(int i=9999;i>333;i--) if(do_they( (int[2]){i, 2*i}, 2 )) {printf("%d%d\n", i, 2*i);break;}
  for(int i=9;i>1;i--)      if(do_they( (int[5]){i, 2*i, 3*i, 4*i, 5*i}, 5 )) printf("%d%d%d%d%d\n", i, 2*i, 3*i, 4*i, 5*i);
}
