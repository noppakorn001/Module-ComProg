// fill in the blank for input math eng and phy score from user 
// then calculate total and average and print it

#include <stdio.h>
#define N 35 // define N as 35
struct student {
    char name[20];
    int eng;
    int math;
    int phy;
    double mean;
};

int main(void)
{
    struct student  data[N];
    int i, j, n;
    printf("Enter Number of Student:\n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter Student name:\n");
        scanf("%s", data[i].name); // first blank
        printf("Enter score of 3 subject respectively:\n");
        scanf("%d %d %d", &data[i].eng, &data[i].math, &data[i].phy); // second blank
    }
    //find average of each student
    for(i=0; i<n; i++){
        data[i].mean = (data[i].eng + data[i].math + data[i].phy) / 3.0; // third blank
    }
    
    for(i=0; i<n; i++){
        printf("%s %d %d %d %.2f\n", data[i].name, data[i].eng, data[i].math, data[i].phy, data[i].mean);
    }
    return 0;
}