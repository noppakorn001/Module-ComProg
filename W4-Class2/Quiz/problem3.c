// fill in the blank program for create complex number structure that have real number and imaginary number
// program have 2 fuction to sum 2 complex number and to check if 2 complex number are equal

#include <stdio.h>

typedef struct complex{
    float real;
    float imag;
}complex;

complex add(complex n1,complex n2);
int compare(complex n1,complex n2); // blank

int main(){
    complex n1,n2,temp;
    int cmp;

    printf("For 1st complex number \n");
    printf("Enter real and imaginary respectively:\n");
    scanf("%f %f",&n1.real,&n1.imag); // blank
    printf("\nFor 2nd complex number\n");
    printf("Enter real and imaginary respectively:\n");
    scanf("%f %f",&n2.real,&n2.imag); // blank
    temp=add(n1,n2);
    cmp = compare(n1,n2);
    printf("Sum=%.1f+%.1fi \n",temp.real,temp.imag);
    if(cmp==1) printf("Same Value"); else printf("Not Same Value");
    return 0;
}

complex add(complex n1, complex n2){
    complex temp;
    temp.real=n1.real+n2.real;
    temp.imag=n1.imag+n2.imag;
    return temp;
}

int compare(complex n1, complex n2){
    if(n1.real==n2.real && n1.imag==n2.imag) return 1;
    else return 0;
} 