#include <math.h>
#include <stddef.h>
#include <stdio.h>
#define INC(k) if(a[k] > max[k]){a[k]=0;a[k+1]++;}
int main() {
  double c[25] = {
      log10(2),  log10(3),  log10(5),  log10(7),  log10(11),
      log10(13), log10(17), log10(19), log10(23), log10(29),
      log10(31), log10(37), log10(41), log10(43), log10(47),
      log10(53), log10(59), log10(61), log10(67), log10(71),
      log10(73), log10(79), log10(83), log10(89), log10(97),
  };

  int max[25] = {0};
  int a[25] = {0};
  for (size_t i = 0; i < 25; i++) max[i] = floor(9 / c[i]);
  unsigned long long count = 0;
  double sum = 0;
  for (;!(a[24]==max[24]);) {
    INC(0)
    INC(1)
    INC(2)
    INC(3)
    INC(4)
    INC(5)
    INC(6)
    INC(7)
    INC(8)
    INC(8)
    INC(9)
    INC(10)
    INC(11)
    INC(12)
    INC(13)
    INC(14)
    INC(15)
    INC(16)
    INC(17)
    INC(18)
    INC(19)
    INC(20)
    INC(21)
    INC(22)
    INC(23)
    sum = 0;
    for (size_t i = 0; i < 25; i++) sum += c[i] * a[i];
    if (sum < 9) count++;
    a[0]++;
  }

  printf("%llu\n", count+1);
}
