#include "./primes.h"
#include <stdio.h>

int main() {
  int maxi = 41, maxv = 6;
  int a, s, v;

  int len_primes = sizeof(P) / sizeof(P[0]);
  for (int i = 0; i < len_primes; i++) {
    for (a = 0; a < i; a++) {
      v = 0;
      s = 0;
      for (int j = a; j < i; j++) {
        s += P[j];
        if(s>P[i]) break;
        if(s==P[i]){
          v++;
          if(v>maxv){
            maxv = v;
            maxi = P[i];
          }
        }
        v += 1;
      }
    }
  }
  printf("[%d, %d]", maxi, maxv);
}
