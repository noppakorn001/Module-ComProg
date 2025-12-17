// https://www.geeksforgeeks.org/c/c-arrays/

/* create array and fix size */

#include <stdio.h>

int main() {
    
    float score[6] = {79.5, 50.0, 61.0, 72.0, 90.0, };
    int n = sizeof(score)/sizeof(score[0]);

    // Printing array elements
    for (int i = 0; i < n; i++) {
        printf("%f ", score[i]);
    }

    return 0;
}

