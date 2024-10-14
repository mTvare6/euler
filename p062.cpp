#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#define uint unsigned long long
#define print(args) std::cout << args << std::flush
#define println(args) std::cout << args << std::endl
int main() {

  std::unordered_set<uint> cubes;
  std::string s;
  uint c = 0;
  uint p;
  for (uint i = 2; i < 1000; i++) {
    cubes.insert(i * i * i);
  }

  for (uint e : cubes) {
    s = std::to_string(e);
    c = 0;
    do {
      p = std::stoull(s);
      if (cubes.contains(p)) {
        c++;
        println(p << " ");
      }
    } while (std::next_permutation(s.begin(), s.end()));
    println("");
    if (c >= 3) {
      do {
        p = std::stoull(s);
        /*if (cubes.contains(p))*/
      } while (std::next_permutation(s.begin(), s.end()));
    }
  }
}
