#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int lc = 0, uc = 0;
  for (char x : s) {
    if (x == toupper(x))
      uc++;
    else
      lc++;
  }
  if (uc > lc)
    for (char x : s)
      cout << char(toupper(x));
  else
    for (char x : s)
      cout << char(tolower(x));
  cout << endl;
}