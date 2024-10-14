#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define wint unsigned long 

static inline wint gcd(wint u, wint v) {
  int shift, uz, vz;
  if (u == 0) return v;
  if (v == 0) return u;
  uz = __builtin_ctz(u);
  vz = __builtin_ctz(v);
  shift = uz > vz ? vz : uz;
  u >>= uz;
  do {
   v >>= vz;
   int diff = v;
   diff -= u;
   vz = __builtin_ctz(diff);
   if (diff == 0) break;
   if (v < u) u = v;
   v = abs(diff);
  } while (1);
  return u << shift;
}

static inline wint nb(wint n){
  wint ib = 0;
  const wint nc = n;
  for(wint x=2;x*x<=n;x++){
    if(n%x==0){
      int i = 0;
      while(n%x==0){
        i++;
        n/=x;
      }
      ib += nc*i/x;
    }
  }
  if(n!=1) ib+=nc/n;
  return ib;
}

#define N 5e15+1
int main(){
  wint s = 0;
  for(int i = 2;i<N;i++){
    s+=gcd(i, nb(i));
    if(i%10000000==0) printf("%d\n", i);
  }
  printf("%lu\n", s);
}
