#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll k, n, w;
  cin >> k >> n >> w;
  ll ans = k * ((w * (w + 1)) / 2) - n;
  if (ans < 0)
    cout << 0 << endl;
  else
    cout << ans << endl;
  return 0;
}