#include <stdio.h>

int main(void)
{
    short ar[10];
    short *ptr = ar;
    short *p = &ar[3];

    printf("ptr = %u, p = %u\n", ptr, p);

    int res = p - ptr;

    printf("res = %d\n", res);

    return 0;

}