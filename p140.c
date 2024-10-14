#include <stdbool.h>
#include <stdio.h>
#define wint unsigned long long

static inline wint perfsq(wint n) {
  for (wint x = 2; x * x <= n; x++) {
    if (n % x == 0) {
      int i = 0;
      for (; n % x == 0; i++, n /= x)
        ;
      if (i & 1)
        return false;
    }
  }
  if (n != 1)
    return false;
  return true;
}

#define N 30

int main() {
  int c = 0;
  wint ir[N] = {0};
  wint jr[N] = {0};
  for (wint i = 2;c<12; i++) {
    if (perfsq(i * (5 * i + 14) + 1)) {
      ir[c] = i;
      c++;
      printf("%d:\t%llu\n", c, i);
    }
  }


  puts("");
  for(int j=0;ir[j]!=0;j++)
    printf("%llu\t", ir[j]);
  puts("");

  for(int j=1;ir[j]!=0;j++){
    jr[j-1]=ir[j]-ir[j-1];
    printf("%llu\t", jr[j-1]);
  }
  puts("");

  for(int j=1;jr[j]!=0;j++){
    printf("%llu\t", jr[j]-jr[j-1]);
  }

}
