#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  for (int tt = 1; tt <= test; tt++) {
    int mx = 0, sum = 0, x;
    for (int i = 0; i < 3; ++i) {
      cin >> x;
      sum += x;
      if (x > mx)
        mx = x;
    }
    cout << ((sum == 2 * mx) ? "YES" : "NO") << endl;
  }

  return 0;
}