#include <stdio.h>

int main(void)
{
    int n = 5, m = 7;
    int x, y;

    while (scanf("%d, %d", &x, &y) == 2)
    {
        if (x < 1 || x > n || y < 1 || y > m)
            continue;

        printf("(%d, %d)\n", x, y);
    }

    return 0;
}