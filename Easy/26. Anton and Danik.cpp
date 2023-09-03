#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  string name;
  getline(cin, name);
  getline(cin, name);

  int an = 0, da = 0;
  for (auto i : name) {
    if (i == 'A') {
      an++;
    } else
      da++;
  }
  if (an == da) {
    cout << "Friendship\n";
  } else if (an > da) {
    cout << "Anton\n";
  } else {
    cout << "Danik\n";
  }
  return 0;
}