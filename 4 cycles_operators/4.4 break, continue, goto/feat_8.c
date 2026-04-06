#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("no\n");
        return 0;
    }

    int is_prime = 1;
    int d = 2;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            is_prime = 0;
            break;
        }
        d++;
    }

    printf("%s\n", is_prime ? "yes" : "no");
    return 0;
}
