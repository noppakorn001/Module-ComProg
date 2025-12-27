// 6810210158 Noppakorn Wunnoy

#include <stdio.h>
#include <math.h>

int main(){
    float SpeedA,SpeedB,Distance;
    printf("Enter Speed of Car A (km/h) : ");
    scanf("%f",&SpeedA);
    printf("Enter Speed of Car B (km/h) : ");
    scanf("%f",&SpeedB);
    printf("Enter Distance B > A (km) : ");
    scanf("%f",&Distance);

    float Time = (Distance / (SpeedA-SpeedB))*60;
    printf("Use Time is : %.0f minute",Time);

    return 0;
}
