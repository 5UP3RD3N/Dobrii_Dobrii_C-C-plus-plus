#include <stdio.h>

#define TOTAL_MARKS 13

int main(void)
{
    int marks[TOTAL_MARKS] = {1, 2, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", marks[i]);

    return 0;
}