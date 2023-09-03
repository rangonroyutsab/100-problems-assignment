#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, ans;
  scanf("%d %d", &a, &b);

  while (!(a == -1 && b == -1)) {
    ans = abs(a - b);
    ans = min(ans, abs(100 - ans));
    cout << ans << endl;
    scanf("%d %d", &a, &b);
  }
  return 0;
}
