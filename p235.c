#include <math.h>
#include <stdio.h>
static inline double s(double x) {
  double r = 1;
  double sm = 0;
  for (double k = 1; k <= 5000; k++, r *= x)
    sm += (900 - 3 * k) * r;
  return sm;
}

const double E = -600000000000.;
int main() {
  double u = 2;
  double l = 0;
  double mid = (u + l) / 2;
  double sp = 0;
  for (; fabs(E - sp) > 0.25; mid = (u + l) / 2) {
    sp = s(mid);
    if (sp > E)
      l = mid;
    if (sp < E)
      u = mid;
  }
  printf("%.12f\n", mid);
}
