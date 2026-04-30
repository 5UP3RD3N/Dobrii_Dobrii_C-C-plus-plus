#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);

    unsigned char *ptr = (unsigned char *)&count;

    for (int i = 0; i < 4; i++) {
        ptr[i] &= ~0xC2;  // ~11000010 = 00111101 - выключаем биты 7, 6 и 1
    }

    printf("%d\n", count);
    return 0;
}




