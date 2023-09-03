#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, r, ans = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin >> l >> r;
  for (int i = l; i <= r; i++)
    ans += arr[i];
  cout << ans << endl;
  return 0;
}
