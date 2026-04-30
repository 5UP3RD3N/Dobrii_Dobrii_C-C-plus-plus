#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);

    unsigned char *ptr = (unsigned char *)&count;

    for (int i = 0; i < 4; i++) {
        ptr[i] |= 0x09;  // 00001001 - включаем биты 3 и 0
    }

    printf("%d\n", count);
    return 0;
}




