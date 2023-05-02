#include <stdio.h>
#include <string.h>

int main()
{
    int n, x=0;
    char in[5];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", in);
        if (in[1] == '+') x++;
        if (in[1] == '-') x--;
    }
    printf("%d\n", x);
    return 0;
}
