#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    short *ptr = (short *)&value;

    for (int i = 0; i < 2; i++) {
        ptr[i]++;
    }

    printf("%d\n", value);
    return 0;
}