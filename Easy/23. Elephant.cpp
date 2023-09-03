#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, ans = 0, d = 5;
  cin >> x;
  while (d > 0) {
    ans += (x / d);
    x %= d;
    d--;
  }
  cout << ans << endl;
}