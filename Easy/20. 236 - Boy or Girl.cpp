#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  set<char> st;
  for (auto x : s)
    st.insert(x);
  if (st.size() & 1)
    cout << "IGNORE HIM!\n";
  else
    cout << "CHAT WITH HER!\n";
  return 0;
}
