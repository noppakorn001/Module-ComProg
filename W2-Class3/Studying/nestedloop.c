#include<stdio.h>
int main()
{
    int end = 5;
    printf("Pattern Printing using Nested for loop");
    int i = 1,j=1;
    for (i =1;i<=end;i++) {
        printf("\n");
        for (j=1;j <= i;j++) {
            printf("%d ", j);
        }
    }
}