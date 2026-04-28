#include <stdlib.h>

int main(void)
{
    double digs[100];
    double *p1 = &digs[2], *p2 = &digs[7];
    int count = p2 - p1;

    printf("%d", count);
    return 0;
}
