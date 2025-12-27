// 6810210158 Noppakorn Wunnoy
/*
In this problem, we want to write a better_array function that takes arrays A1 and A2 containing N integers, where A1, A2, and N are the inputs passed as parameters to the function.
If sum of number in A1 is greater than sum of number in A2, return 1
If sum of number in A1 is less than sum of number in A2, return 2
If sum of number in A1 is equal to sum of number in A2, return 0 (BetterArray)
*/

// use random number 0-100 for fill in array

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int betterArray(int A1[], int A2[], int N){
    int sumA1 = 0;
    int sumA2 = 0;

    // calculate sum
    for (int i=0; i<N; i++){
        sumA1 += A1[i];
        sumA2 += A2[i];
    }

    // compare sum of A1 and A2
    if (sumA1 > sumA2){
        return 1;
    }else if (sumA1 < sumA2){
        return 2;
    }else{
        return 0;
    }
}

int main(){
    int N;
    printf("Enter the size of array: ");
    scanf("%d", &N);

    int A1[N], A2[N];
    srand(time(NULL));

    //fill in array
    for (int i=0; i<N; i++){
        A1[i] = rand() % 101;
        A2[i] = rand() % 101;
    }

    // print array A1
    printf("Random number (0-100) for array A1: ");
    for (int i=0; i<N; i++){
        printf("%d ", A1[i]);
    }

    // print array A2
    printf("\nRandom number (0-100) for array A2: ");
    for (int i=0; i<N; i++){
        printf("%d ", A2[i]);
    }

    // compare sum of array
    int compare = betterArray(A1, A2, N);
    if (compare == 1){
        printf("\nThe Result is Array : A1  > A2");
    }else if (compare == 2){
        printf("\nThe Result is Array : A2  > A1");
    }else if (compare == 0){
        printf("\nThe Result is Array : A1 = A2");
    }
    
    
}