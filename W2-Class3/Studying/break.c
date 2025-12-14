#include <stdio.h>
#include <math.h>
int main() {
    double x, sqrt_x;
    printf("Enter number : "); scanf("%lf", &x);
    while (x >= 100) {
        if (x < 0) {
            printf("ERROR - NEGATIVE VALUE FOR X");
            break;
        }
        sqrt_x = sqrt(x);
        printf("Square root of %lf is %lf \n", x, sqrt_x);
        printf("Enter number : "); scanf("%lf", &x);
    }
    printf("END OF JOB");
}
