#include <stdio.h>

int main(void)
{
    extern short marks[];
    size_t len = sizeof(marks) / sizeof(short);

    double sum = 0;
    for (int i = 0; i < (int)len; i++)
        sum += marks[i];

    printf("%.2f\n", sum / len);
    return 0;
}