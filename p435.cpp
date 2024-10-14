#include <cmath>
#define MOD 1307674368000
#define T unsigned long
#include <map>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

struct fib
{
    std::map<std::tuple<T>, T> cache;

    T operator()(T n)
    {
        if(n < 2) return n;

        auto memoize = [this](T p)
        {
            auto i = cache.find(p);
            if(i == cache.end()) i = cache.insert({p, (*this)(p)}).first;
            return i->second;
        };

        return (memoize(n-1) + memoize(n-2))%MOD;
    }
};
#include <iostream>
int main(){
  fib f;
  for(T i = 1;i<90;i++){
    std::cout << f(std::pow(10, 15)) << std::endl;
  }
}
