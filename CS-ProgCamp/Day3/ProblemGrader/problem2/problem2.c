// input positive integer and check palindrome (reverse)

#include <stdio.h>

int main() {
    int n, original;
    int reverse = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    //printf("Reverse = %d\n", reverse);

    if(reverse == original) {
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }

    return 0;
}