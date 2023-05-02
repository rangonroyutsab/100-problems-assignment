#include <stdio.h>
#include <math.h>

int main()
{
    int answer=0, temp, i, j;
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            scanf("%d", &temp);
            if (temp == 1) {
                answer = abs(i-2) + abs(j-2);
            }
        }
    }
    printf("%d\n", answer);
    return 0;
}
