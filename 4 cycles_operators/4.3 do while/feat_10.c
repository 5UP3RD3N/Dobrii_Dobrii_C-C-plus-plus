#include <stdio.h>

int main(void)
{
    int m, n, k;

    scanf("%d %d %d", &m, &n, &k);

    double sum = 0.0;
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            int t = 1;
            do
            {
                double denom = (double)(i + t) * (i + t) * (i + t) - t;
                sum += (double)(j * j) / denom;
                t++;
            } while (t <= k);
            j++;
        } while (j <= n);
        i++;
    } while (i <= m);

    double S = sum / (n + m + k);

    printf("%.4f\n", S);

    return 0;
}
