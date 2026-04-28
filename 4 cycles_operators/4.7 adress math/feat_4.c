#include <stdio.h>

int main(void)
{
    double value;
    scanf("%lf", &value);

    unsigned char *ptr = (unsigned char *)&value;

    for (int i = 0; i < 8; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", (signed char)ptr[i]);
    }
    printf("\n");

    return 0;
}