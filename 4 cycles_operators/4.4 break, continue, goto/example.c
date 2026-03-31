#include <stdio.h>

int main(void)
{
    double x, s = 0.0;

    while (scanf("%lf", &x) == 1 && x >= 0)
    {
        if (x < 0)
            break; // return 0; //contin

        s += x;
    }

    printf("s = %.2f\n", s);

    return 0;
}
