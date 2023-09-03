#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  scanf("%d", &test);
  for (int i = 1; i <= test; i++) {
    int a, b, c, answer;
    scanf("%d %d %d", &a, &b, &c);
    if ((a < b && b < c) || (a > b && b > c))
      answer = b;
    else if ((b < a && a < c) || (b > a && a > c))
      answer = a;
    else
      answer = c;
    printf("Case %d: %d\n", i, answer);
  }
  return 0;
}
