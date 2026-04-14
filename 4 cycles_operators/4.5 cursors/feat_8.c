#include <stdio.h>

int main(void)
{
    short a, b, init_a, init_b;

    scanf("%hd, %hd", &a, &b);
    init_a = a; init_b = b;

    short *ptr_a = &a;
    short *ptr_b = &b;
    short temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}