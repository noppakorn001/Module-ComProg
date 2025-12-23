/*Noppakorn Wunnoy 6810210158*/

#include <stdio.h>
int main() {
    int number[10] = {3, 1, 10, 20, 4, 30, 8, 12, 2, 0};
    int *p;
    int i;
    int min, max, sum = 0;
    float average;

    p = number;

    min = *p;
    max = *p;

    for (i = 0; i < 10; i++) {
        if (*(p + i) < min) {
            min = *(p + i);
        }
        
        if (*(p + i) > max) {
            max = *(p + i);
        }
        
        sum += *(p + i);
    }

    average = (float)sum / 10;

    printf("Min       = %d\n", min);
    printf("Max       = %d\n", max);
    printf("Summation = %d\n", sum);
    printf("Average   = %.2f\n", average);

    return 0;
}