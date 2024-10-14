#include <unordered_set>
#include <iostream>
#define MAX 51
#define wint unsigned long long

wint C[MAX + 1][MAX + 1] = {{0}};

static inline bool squarefree(wint n) {
  for (wint x = 2; x * x <= n; x++)
    if (n % x == 0) {
      n /= x;
      if (n % x == 0)
        return false;
    }
  return true;
}

int main() {

  C[0][0] = 1;
  for (int i = 1; i < MAX; i++) {
    C[i][0] = 1;
    for (int j = 1; j <= i; j++) {
      C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
    }
  }

  wint s = 1;
  std::unordered_set<wint> v;
  for (wint n = 1; n < MAX; n++) {
    for (wint r = 1; r <= n / 2 - ((n & 1) ? 0 : 1); r++)
      if (squarefree(C[n][r]))
        v.insert(C[n][r]);
    if (!(n & 1) && squarefree(C[n][n / 2]))
      v.insert(C[n][n / 2]);
  }
  for(wint e:v) s+=e;
  std::cout << s << std::endl;
}
