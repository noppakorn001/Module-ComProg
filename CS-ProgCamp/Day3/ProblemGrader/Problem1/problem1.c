#include <stdio.h>

int main() {
    double a, b, c, max;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("%g\n", max);

    return 0;
}