#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  for (int tt = 1; tt <= test; tt++) {
    int n, k, p, ans;
    cin >> n >> k >> p;
    ans = (k + (p % n)) % n;
    if (ans == 0)
      ans += n;
    cout << "Case " << tt << ": " << ans << endl;
  }
  return 0;
}