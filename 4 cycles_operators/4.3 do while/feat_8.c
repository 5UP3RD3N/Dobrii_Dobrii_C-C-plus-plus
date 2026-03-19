#include <stdio.h>

int main(void)
{
    int a, b, n, d1, d2, d3;

    scanf("%d %d", &a, &b);

    n = a;
    do
    {
        d1 = n / 100;
        d2 = n / 10 % 10;
        d3 = n % 10;

        if (d1 != d2 && d1 != d3 && d2 != d3)
            printf("%d ", n);

        n++;
    } while (n <= b);

    return 0;
}
