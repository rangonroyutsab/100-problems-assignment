#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  for (int tt = 1; tt <= test; tt++) {
    int n, cnt = 0;
    cin >> n;
    vector<double> a(n);
    double         avg = 0.0, ans = 0.0;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      avg += a[i];
    }
    avg /= double(n);
    for (int i = 0; i < n; ++i) {
      if (a[i] > avg)
        cnt++;
    }
    ans = (cnt / double(n)) * 100.00;
    printf("%.3lf%\n", ans);
  }
  return 0;
}