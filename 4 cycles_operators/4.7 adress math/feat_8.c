#include <stdio.h>

int main(void)
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // открытка влезает если подходит хотя бы одной ориентацией
    int fit1 = (c + 1.0 <= a) && (d + 1.0 <= b);  // прямо
    int fit2 = (d + 1.0 <= a) && (c + 1.0 <= b);  // повёрнуто

    printf("%s\n", (fit1 || fit2) ? "yes" : "no");
    return 0;
}