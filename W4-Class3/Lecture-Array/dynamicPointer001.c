#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* score;//*****
    int i,number;

    printf("Enter number of Student : ");
    scanf("%d",&number);

    score = (int *)malloc(number*sizeof(int));//*******
    printf("\nEnter Score : \n");

    for(i = 0;i<number;i++)
    {
        scanf("%d",&score[i]);
    }

    score = realloc(score,(number+3)*sizeof(int*));
    printf("\nEnter Score  extend 3 values: \n");

    for(i=number;i<number+3;i++)
    {
        scanf("%d",&score[i]);
    }

    printf("------------------------\n");
    for(i = 0;i<number+3;i++)
    {
        printf("%d  ",score[i]);
    }
    return 0;
}