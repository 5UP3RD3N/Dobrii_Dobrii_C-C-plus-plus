#include <stdio.h>

int main(void)
{
    int arg = 777;
    int *ptr_arg
    char *ptr;

    ptr_arg = &arg;
    ptr = ptr_arg;

    *ptr = 1;
    

    return 0;

}