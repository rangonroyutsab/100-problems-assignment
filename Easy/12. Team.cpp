#include <stdio.h>

int main() {
  int n, ans = 0, s = 0, x, i;
  scanf("%d", &n);
  while (n--) {
    s = 0;
    for (i = 1; i <= 3; i++) {
      scanf("%d", &x);
      s += x;
    }
    if (s >= 2)
      ans++;
  }
  printf("%d\n", ans);
  return 0;
}
