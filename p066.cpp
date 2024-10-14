#include <climits>
#include <cmath>
#include <iostream>

using namespace std;
#define uint unsigned long long

bool is_perfect_square(int n) {
  int root(round(sqrt(n)));
  return n == root * root;
}

int main() {

  double max, buf;
  uint maxD = 0;
  for (uint D = 2; D <= 1000; D++) {

    if (!is_perfect_square(D)) {
      for (uint y = 1;; y++)
        if (is_perfect_square(D * y * y + 1)) {
          buf = sqrt(1 + D * y * y);
          if (buf > max) {
            max = buf;
            maxD = D;
          }
          break;
        }
    }
  }
  cout <<  maxD << endl;
}
