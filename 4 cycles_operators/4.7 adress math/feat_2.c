#include <stdio.h>

int main(void)
{
    short *p = (short *)10; // тип short 16 бит
    p++;
    printf("%d", p);
    return 0;
}