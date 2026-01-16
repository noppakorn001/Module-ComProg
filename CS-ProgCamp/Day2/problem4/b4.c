#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int sum=0;
    while(n!=0) {
        scanf("%d", &n);
        sum = sum+n;
    }
    printf("%d", sum);
    return 0;
}