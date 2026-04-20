#include <stdio.h>

int main(void)
{
    int var;

    scanf("%d", &var);

    int *ptr_var = &var;
    char *ptr_ch = (char *)ptr_var;

    printf("%d", *ptr_ch);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}
