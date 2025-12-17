#include <stdio.h>

int main(){
    int myNumbers[5] = {25, 30, 75, 60};
    //printf("%d", myNumbers[2]);

    myNumbers[0] = 99;
    //printf("%d", myNumbers[0]);

    for (int i = 0; i < 4; i++) {
        printf("%d\n",myNumbers[i]);
    }
    return 0;
}