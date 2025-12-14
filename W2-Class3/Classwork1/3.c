#include<stdio.h> 
int main() 
{ 
 int i=0,x=0; 
 for(i = 1; i>10; i*=3) 
 { 
 x++; 
 printf("%d ",x); 
 } 
 printf("\nx=%d",x); 
} 