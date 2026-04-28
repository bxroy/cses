#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  
  int k = pow(2,n);

  int num=0;

  while (k--){
    for (int i = n-1; i >= 0; i--) {
      cout << ((num >> i) & 1);
    }
    cout << "\n";
    num++;
  }
  return 0;
}
