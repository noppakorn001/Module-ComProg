// input number and find 1. sum of digits 2. reverse of number
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int reverse = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    printf("%d\n", sum);
    printf("%d", reverse);
    return 0;
}