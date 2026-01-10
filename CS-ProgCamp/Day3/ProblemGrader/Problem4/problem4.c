/*
input 3 length and define can create triangle or not
if can create triangle define type of triangle
equilateral triangle
example 
5 5 8 isosceles triangle
3 4 5 scalene triangle
1 2 3 not a triangle
*/
#include <stdio.h>
int main() {
    int a,b,c;

    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) printf("equilateral triangle");
        else if (a == b || a == c || b == c) printf("isosceles triangle");
        else printf("scalene triangle");
    } else printf("not a triangle");
    return 0;
}