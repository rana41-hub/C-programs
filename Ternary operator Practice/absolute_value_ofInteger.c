#include<stdio.h>
#include<stdlib.h>

int main ()
{

int num;

printf("Enter the number :");
scanf("%d",&num);

(num >= 0) ? printf("absolute value of the given number is %d",num) : printf("absolute value of the given number is %d",abs(num));

}