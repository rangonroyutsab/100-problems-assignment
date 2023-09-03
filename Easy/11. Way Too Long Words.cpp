#include <stdio.h>
#include <string.h>

int main() {
  int  test, len;
  char ss[108];

  scanf("%d", &test);
  while (test--) {
    scanf("%s", ss);
    len = strlen(ss);

    if (len <= 10) {
      printf("%s\n", ss);
    } else {
      printf("%c%d%c\n", ss[0], len - 2, ss[len - 1]);
    }
  }
  return 0;
}
