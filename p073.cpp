#include <iostream>
#include <numeric>
#define N 12000

int main(){
  int c = 0;
  for(int d = 5; d<=N; d++)
    for(int i= 1+(d / 3)  ; i<=d/2; i++)
      if( std::gcd(i, d) == 1)
        c++;

  std::cout << c << std::endl;
}
