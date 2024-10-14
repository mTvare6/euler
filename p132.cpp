#include <gmpxx.h>
#include <iostream>

#define wint unsigned long long

int main() {
  mpz_class s, x, n;
  mpz_ui_pow_ui(n.get_mpz_t(), 10, 1'000'000'000);
  n = (n-1)/9;
  for (x = 2; x * x <= n; x++) {
    if (n % x == 0) {
      s += x;
      while (n % x == 0)
        n /= x;
    }
  }
  if (n != 1)
    s += n;

  std::cout << s << std::endl;
}
