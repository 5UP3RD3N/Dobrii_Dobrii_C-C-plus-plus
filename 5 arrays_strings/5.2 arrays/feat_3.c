#include <stdio.h>

int main(void)
{
    extern short marks[];
    size_t size_bytes = sizeof(marks);
    size_t length = size_bytes / sizeof(short);
    printf("%zu %zu\n", length, size_bytes);
    return 0;
}