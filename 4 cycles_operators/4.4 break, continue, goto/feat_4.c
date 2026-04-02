#include <stdio.h>

int main(void)
{
    int n, i = 1;
    scanf("%d", &n);

    while (1)
    {
        if (i * i >= n)
            break;
        printf("%d ", i);
        i++;
    }

    printf("\n");
    return 0;
}
