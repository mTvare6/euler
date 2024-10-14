#include <set>
#include <iostream>

using namespace std;
typedef long long int64;

int64 fpm(int64 b, int64 e, int64 m) { int64 t = 1; for (; e; e >>= 1, b = b * b % m) e & 1 ? t = t * b % m : 0; return t; }

const int n = 1e5, N = n + 10;

int prime[N];

int main(){
    int64 ans = 0;
    for (int i = 2; i <= n; ++i) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1, k = n / i, t; prime[j] <= k; ++j) {
            prime[t = i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 1; i <= prime[0]; ++i) {
        int p = prime[i];
        set<int> S;
        ans += p;
        if (p == 3) continue;
        for (int x = 10; S.count(x) == 0; x = fpm(x, 10, p)) {
            S.insert(x);
            if (x == 1) {
                cout << p << endl;
                ans -= p;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0; 
}
