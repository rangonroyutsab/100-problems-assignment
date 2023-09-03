#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  while (scanf("%lld", &n) == 1) {
    if (n < 0) {
      if (n & 1)
        cout << "Overflow!\n";
      else
        cout << "Underflow!\n";
    }
    if (n < 8)
      cout << "Underflow!\n";
    else if (n > 13)
      cout << "Overflow!\n";
    else {
      ll ans = 1;
      for (ll i = 1; i <= n; i++) {
        ans *= i;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
