#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int S = 0;
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i + j >= 10) {
                break;  // только внутренний цикл
            }
            S += i + j;
        }
        // внешний цикл продолжается!
    }
    
    printf("%d\n", S);
    return 0;
}