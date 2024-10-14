#include <iostream>
#include <numeric>

int main(int argc, char *argv[]) {
  int c = 0;
  for (int b = 20000;; b++) {
    c = 1;
    for (int a = 2; a < b; a++)
      if (std::gcd(a, b) == 1)
        c++;
    if (94744 * c < 15499 * (b - 1)) {
      std::cout << b << std::endl;
      break;
    }
  }
  return 0;
}
