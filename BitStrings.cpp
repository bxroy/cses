#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  const long long MOD = 1e9+7;

  long long n, ans=1, base=2; cin >> n;

  while (n) {
    if (n & 1) ans = ans * base % MOD;
    base = base * base % MOD;
    n >>= 1;
  }
  cout << ans << endl;
}
