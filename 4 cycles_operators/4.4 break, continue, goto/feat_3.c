#include <stdio.h>

int main(void)
{
    int num;
    long long product = 1;

    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num < 0)
            continue;
        product *= num;
    }

    printf("%lld\n", product);
    return 0;
}
