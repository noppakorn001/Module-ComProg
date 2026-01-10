// input positive number and check is it prime or not (use check to sqrt(n))

/*
Input Output
1 not prime
2 prime
*/
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    // input positive number and check is it prime or not (use check to sqrt(n)
    scanf("%d", &n);
    int check = 1;

    // if n = 1 print not prime
    if (n == 1) {
        printf("not prime");
        return 0;
    }

    // if n = 0 print not prime
    if (n == 0) {
        printf("not prime");
        return 0;
    }

    // check from 2 to sqrt(n)
    for (int i=2; i<=sqrt(n); i++) {
        if (n % i == 0) {
            check = 0;
            break;
        }
    }
    // print prime or not prime
    if (check) {
        printf("prime");
    }
    else {
        printf("not prime");
    }
    return 0;
}