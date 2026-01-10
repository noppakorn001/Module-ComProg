// input matrix 2*2 2metrix and show sum of 2 matrix

#include <stdio.h>
int main() {
    // input to matrix
    int a[2][2], b[2][2], sum[2][2];
    int i, j;
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    // sum
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    // output
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}