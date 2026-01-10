#include <stdio.h>
int main() {

    int n;
    scanf("%d", &n);
    //show Fibonacci sequence (start 0,1,1,2...)
    int a = 0, b = 1, c;
    for (int i=0; i<n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}