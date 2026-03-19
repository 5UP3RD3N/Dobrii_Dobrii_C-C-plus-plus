#include <stdio.h>

int main(void)
{
    int m, n;

    scanf("%d %d", &m, &n);

    int num = m;
    do
    {
        int original = num;
        int reversed = 0;
        int tmp = num;

        do
        {
            reversed = reversed * 10 + tmp % 10;
            tmp /= 10;
        } while (tmp > 0);

        if (original == reversed)
            printf("%d ", num);

        num++;
    } while (num <= n);

    return 0;
}
