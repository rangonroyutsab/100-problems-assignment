#include <bits/stdc++.h>
using namespace std;

int main() {
  int  a, b, c;
  bool answer = false;
  scanf("%d %d %d", &a, &b, &c);

  while (!(a == 0 && b == 0 && c == 0)) {
    if (a * a + b * b == c * c)
      answer = true;
    if (b * b + c * c == a * a)
      answer = true;
    if (c * c + a * a == b * b)
      answer = true;

    if (answer)
      cout << "right\n";
    else
      cout << "wrong\n";

    answer = false;
    scanf("%d %d %d", &a, &b, &c);
  }
  return 0;
}
