#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, lucky = 0;
  cin >> n;
  bool f = true;
  while (n > 0) {
    if ((n % 10 == 4 or n % 10 == 7)) {
      lucky++;
    }
    n /= 10;
  }
  if (lucky == 0)
    f = false;
  while (lucky > 0) {
    if (!(lucky % 10 == 4 or lucky % 10 == 7)) {
      f = false;
      break;
    }
    lucky /= 10;
  }
  cout << ((f) ? "YES" : "NO") << endl;
  return 0;
}