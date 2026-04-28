#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s; int n=s.size();
  sort(s.begin(), s.end());
  
  string s1="", s2="";

  int i=0, j=1;
  while (i<n, j<n) {
    s1 += s[i];
    s2 += s[j];
    i += 2; j += 2;
  }
  cout << s1+s2 << "\n";
  return 0;
}
