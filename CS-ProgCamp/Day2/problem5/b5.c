#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main(){
    srand(time(0));
    int x;
    scanf("%d", &x);
    int num=0;
    int attempts =0;
    while(num != x) {
        scanf("%d", &num);
        attempts++;    
    }
    printf("%d", attempts);

    return 0;
}