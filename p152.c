#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#define u8 uint8_t


#define N 35
void f(bool *s, u8 n){
  if(n<N){
    s[n+1] = true;
    f(s, n+1);
    s[n+1] = false;
    f(s, n+1);
  }
  if(n==N){}
}

int main(){
  bool s[N+1] = {false};
  f(s, 1);
}
