#include <stdio.h>
#include <string.h>

int main() {
  char a[100], b[100];
  char x, y;
  int  i, l;

  gets(a);
  gets(b);

  l = strlen(a);

  for (i = 0; i < l; i++) {
    x = a[i];
    y = b[i];
    if ('A' <= x && x <= 'Z') {
      x = x - 'A' + 'a';
    }
    if ('A' <= y && y <= 'Z') {
      y = y - 'A' + 'a';
    }
    if (x == y) {
      if (i == l - 1) {
        printf("0\n");
        break;
      }
      continue;
    }
    if (x < y) {
      printf("-1\n");
      break;
    }
    if (x > y) {
      printf("1\n");
      break;
    }
  }
  return 0;
}