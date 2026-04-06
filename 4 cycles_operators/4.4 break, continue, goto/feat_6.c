#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    long long sum = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i + j >= 10)
                goto done;
            sum += i + j;
        }
    }

done:
    printf("%lld\n", sum);
    return 0;
}
