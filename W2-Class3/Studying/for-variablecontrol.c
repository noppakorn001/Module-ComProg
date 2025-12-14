/*1 can control variable more than one */
#include <stdio.h>
int main() {
    int x,y;
    for(x=0,y=0; x+y<10; x++,++y)
     printf("%d\n",x+y);
    return 0;
}
