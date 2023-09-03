#include <bits/stdc++.h>
using namespace std;

int main() {
  int    l;
  string s;
  cin >> l;
  cin >> s;
  int i, j, r = 0, b = 0, g = 0, ans = 0;

  for (i = 0; i < l; i++) {
    if (s[i] == 'R') {
      r = 0;
      for (j = 1; i + j <= l; j++) {
        if (s[i + j] == 'R')
          r++;
        else {
          ans += r;
          i += (j - 1);
          break;
        }
      }
    } else if (s[i] == 'G') {
      g = 0;
      for (j = 1; i + j <= l; j++) {
        if (s[i + j] == 'G')
          g++;
        else {
          ans += g;
          i += (j - 1);
          break;
        }
      }
    } else {
      b = 0;
      for (j = 1; i + j <= l; j++) {
        if (s[i + j] == 'B')
          b++;
        else {
          ans += b;
          i += (j - 1);
          break;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}