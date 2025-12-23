#include <stdio.h>

int main() {
    int a = 26;
    int *pt;
    pt = &a;

    printf("\na=%d \t&a=%d\n",a, &a);

    printf("\npt=%d \t&pt=%d\n",pt, &pt);

    return 0;
}