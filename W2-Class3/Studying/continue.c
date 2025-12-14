#include <stdio.h>
void main() {
    int x;
    for(x=0;x<=10;x++) {
        if(x%2==0) //modulo
        continue;
        printf("%d\n",x);
    }
}