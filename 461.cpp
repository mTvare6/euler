#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

const double PI = 3.1415926535897932;

int main() {
  unsigned int order = 10000;
  std::vector<double> f;
  unsigned int maximum = 0;
  while (true) {
    auto current = exp(maximum / double(order)) - 1;
    if (current > PI)
      break;
    f.push_back(current);
    maximum++;
  }

  std::vector<double> pairs;
  pairs.reserve(maximum * maximum / 10);
  for (size_t i = 0; i < maximum; i++)
    for (size_t j = i; j < maximum; j++) {
      if (f[i] + f[j] > PI)
        break;
      pairs.push_back(f[i] + f[j]);
    }

  std::sort(pairs.begin(), pairs.end(), [](double a, double b) {
    auto aa = (const long long *)&a;
    auto bb = (const long long *)&b;
    return *aa < *bb;
  });

  size_t left = 0;
  size_t right = 0;
  double minError = PI;
  for (size_t i = 0; i < pairs.size(); i++) {
    // binary search for the best match
    auto current = pairs[i];
    auto need = PI - current;
    if (need < current)
      break;

    // this value and its predecessor are candidates
    auto match =
        std::upper_bound(pairs.begin(), pairs.end(),
                         need); // actually "sums.begin() + i" works, too

    // "match" is a value slightly too large
    auto error = fabs(need - *match);
    if (error < minError) {
      minError = error;
      left = i;
      right = std::distance(pairs.begin(), match);
    }

    // now "match" is a value slightly too small (or an exact match => spoiler
    // alert: there is no perfect match)
    match--;
    error = fabs(need - *match);
    if (error < minError) {
      minError = error;
      left = i;
      right = std::distance(pairs.begin(), match);
    }
  }

  unsigned int result = 0;
  bool resolvedLeft = false;
  for (size_t a = 0; a < maximum && !resolvedLeft; a++)
    for (size_t b = a; b < maximum; b++)
      if (pairs[left] == f[a] + f[b]) {
        result += a * a + b * b;
        resolvedLeft = true;
        break;
      }

  bool resolvedRight = false;
  for (size_t c = 0; c < maximum && !resolvedRight; c++)
    for (size_t d = c; d < maximum; d++)
      if (pairs[right] == f[c] + f[d]) {
        result += c * c + d * d;
        resolvedRight = true;
        break;
      }

  std::cout << result << std::endl;
  return 0;
}
