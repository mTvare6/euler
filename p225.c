#include <stdbool.h>
#include <stdio.h>
#define uint unsigned long long
static inline bool od(uint n) {
  uint a = 1, b = 1, c = 1, d;
  printf("%llu: ", n);
  while ((d = (a + b + c) % n)) {
    a = b; b = c; c = d;
    printf("%llu ", d);
    if (a==b && b==c && a==1){puts("");return false;}
  }
  puts("");
  return true;
}

#define N ((uint)124)
int main(){
  uint c=0,i;
  for(i = 25;c<N;i+=2){
    if(!od(i)){
      c++;
    }
  }
  printf("%llu\n", i-2);

}
