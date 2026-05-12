#include <stdio.h>

int main(void)
{
    extern float pows[];
    size_t len = sizeof(pows) / sizeof(float);
    
    for (int i = len - 1; i >= 0; i--) {
        if (i < (int)len - 1) printf(" ");
        printf("%.1f", pows[i]);
    }
    printf("\n");
    return 0;
}