#include <stdio.h>
// -O3 for 16x time reduction -funroll-loops
int main(){
  unsigned long long i=1;
  for(int n1 = 0; n1 <= 200 ; n1+=1)
    for(int n2 = 0; n2 <= 200 ; n2+=2)
      for(int n5 = 0; n5 <= 200 ; n5+=5)
        for(int n10 = 0; n10 <= 200 ; n10+=10)
          for(int n20 = 0; n20 <= 200 ; n20+=20)
            for(int n50 = 0; n50 <= 200 ; n50+=50)
              for(int n100 = 0; n100 <= 200 ; n100+=100)
                if( n1+n2+n5+n10+n20+n50+n100  == 200) i++;
  printf("%llu", i);
}
