#include <iostream>
#include <unordered_set>
using namespace std;

#define uint unsigned long long
static inline uint f(uint n){
  switch (n) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 2;
    case 3: return 6;
    case 4: return 24;
    case 5: return 120;
    case 6: return 720;
    case 7: return 5040;
    case 8: return 40320;
    case 9: return 362880;
    default: return 0;
  }
}

static inline uint ds(uint n){
  uint s = 0;
  for(;n>0;){
    s+=f(n%10);
    n/=10;
  }
  return s;
}

int main(){
  uint cm=0;
  for(uint n = 2;n<(uint)1e6;n++){
    unordered_set<uint> r;
    uint i = n;
    uint c = 0;
    for(;!r.count(i);){
      r.insert(i);
      c++;
      i=ds(i);
    }
    if(c==60) cm++;
  }
  cout << cm << endl;
}
