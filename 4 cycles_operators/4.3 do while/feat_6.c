
#include <stdio.h>

int main(void)
{
    int n, i, j;

    scanf("%d", &n);

    i = 1;
    do {
        j = 1;
        do {
            printf("*");
            j++;
        } while (j <= i);

        printf("\n");
        i++;
    } while (i <= n);

    return 0;
}
