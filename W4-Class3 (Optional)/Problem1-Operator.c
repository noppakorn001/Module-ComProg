// 6810210158 Noppakorn Wunnoy

#include <stdio.h>
#include <math.h>

float vectorNorm(float x, float y, float z){
    return sqrt(x*x+y*y+z*z); 
}

int main(){
    float x,y,z;
    printf("Enter value of x : ");
    scanf("%f",&x);
    printf("Enter value of y : ");
    scanf("%f",&y);
    printf("Enter value of z : ");
    scanf("%f",&z);
    printf("Vector Norm of %.2f , %.2f , %.2f is : %.2f",x,y,z,vectorNorm(x,y,z));
    return 0;
}