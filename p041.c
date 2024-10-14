#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_prime_l(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int ndigits(int n) {
  int i = 0;
  for(;n>0;n/=10) i++;
  return i;
}

#define N 7654321
int main() {
  bool has[10] = {false};
  int j;
  int d, nd;
  for (int n = N;; n--) {
    memset(has, 0, sizeof(has));
    j = n;
    nd = ndigits(n);
    while (j > 0) {
      d = j % 10;
      if (has[d] || d > nd || d==0)
        break;
      j /= 10;
      has[d] = true;
    }
    if (j == 0) {
      if (is_prime_l(n)) {
        printf("%d\n", n);
        return 0;
      }
    }
  }
}
