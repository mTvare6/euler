#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define wint long

int main() {
  bool has[10] = {false};
  wint j;
  int d;
  wint s = 0;
  for (wint n = 1023456789;n<9876543210; n++) {

    while( (n%(wint)1e3)%17 != 0) n+= 1;
    while( ((n/(wint)1e1)%(wint)1e3)%13 != 0) n+= (wint)1e1;
    while( ((n/(wint)1e2)%(wint)1e3)%11 != 0) n+= (wint)1e2;
    while( ((n/(wint)1e3)%(wint)1e3)%7 != 0) n+= (wint)1e3;
    if( ((n/(wint)1e4)%5) != 0) n += ((5-1)*1e4);
    while( ((n/(wint)1e5)%(wint)1e3)%3 != 0) n+= (wint)1e5;
    if(((n/(wint)1e6)%2)!=0) n+= ((2-1)*1e6);
    memset(has, 0, sizeof(has));
    j = n;
    while (j > 0) {
      d = j % 10;
      if (has[d])
        break;
      j /= 10;
      has[d] = true;
    }
    if (j == 0) {
      printf("%ld\n", n);
      s+=n;
    }
  }

    printf("SUM: %ld\n", s);
}
