
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, a, b, m;

    scanf("%d", &x);

    srand((unsigned int)time(NULL));

    a = 1;
    b = 1000;

    do {
        m = a + rand() % (b - a + 1);

        if (m < x)
            a = m;
        else if (m > x)
            b = m;
    } while (m != x);

    printf("%d", x);

    return 0;
}
