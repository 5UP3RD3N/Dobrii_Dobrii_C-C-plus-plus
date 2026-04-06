#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int d = 2;
    while (n > 1)
    {
        while (n % d == 0)
        {
            printf("%d ", d);
            n /= d;
        }
        d++;
    }

    printf("\n");
    return 0;
}
