#include <stdio.h>

int main(){
    char u, v = 'A' ;
    char *pu, *pv = &v;
    *pv = v+1;
    u = *pv+1;
    pu = &u;
    printf("%c %c %c %c\n", u, v, *pu, *pv);

    return 0;
}