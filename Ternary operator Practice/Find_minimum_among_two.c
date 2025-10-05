#include<stdio.h>

int main ()
{

float num1,num2;

printf("Enter the first number : ");
scanf("%f",&num1);

printf("Enter the second number : ");
scanf("%f",&num2);

(num1 > num2) ? printf("%f is greater",num1) : printf("%f is greater",num2);

return 0;

}