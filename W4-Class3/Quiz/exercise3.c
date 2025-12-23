/* 6810210158 Noppakorn Wunnoy */

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

struct student {
    char name[50];
    char surname[50];
    float height;
    float weight;
    float bmi;
    char result[30];
};

int main() {
    int n, i;
    struct student *std;

    printf("Enter number of students: ");
    scanf("%d", &n);

    std = (struct student*) malloc(n * sizeof(struct student));

    if (std == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter student data\n");
        printf("\tName      : ");
        scanf("%s", std[i].name);
        printf("\tSurname   : ");
        scanf("%s", std[i].surname);
        printf("\tHeight (m) : ");
        scanf("%f", &std[i].height);
        printf("\tWeight (Kg): ");
        scanf("%f", &std[i].weight);

        std[i].bmi = std[i].weight / (std[i].height * std[i].height);

        if (std[i].bmi >= 20 && std[i].bmi <= 25) {
            strcpy(std[i].result, "Normal BMI");
        } else {
            strcpy(std[i].result, "Dangerous BMI");
        }
    }

    printf("\nBMI result\n");
    for (i = 0; i < n; i++) {
        printf("%s %s weight %.2f kg. height %.2f\n", 
               std[i].name, std[i].surname, std[i].weight, std[i].height);
        
        printf("\tBody mass index %.2f is %s\n\n", 
               std[i].bmi, std[i].result);
    }

    free(std);

    return 0;
}