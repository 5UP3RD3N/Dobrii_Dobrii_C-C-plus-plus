#include <stdio.h>

int main(void)
{
    short var;

    scanf("%hd", &var);

    short *ptr_var = &var;
    char *ptr_ch = (char *)ptr_var;

    *ptr_ch = 2;

    printf("%hd", var);

    __ASSERT_TESTS__
    return 0;
}
