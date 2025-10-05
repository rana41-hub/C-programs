#include<stdio.h>

int main ()
{

int num1,num2;

printf("Enter the first number : ");
scanf("%d",&num1);

printf("Enter the second number : ");
scanf("%d",&num2);

printf("\n");

printf("Sum of the two numbers : %d + %d = %d",num1,num2,num1+num2);
printf("\n");
printf("Difference of the two numbers : %d - %d = %d",num1,num2,num1-num2);
printf("\n");
printf("Product of the two numbers : %d * %d = %d",num1,num2,num1*num2);
printf("\n");
printf("Division of the two numbers : %d / %d = %d",num1,num2,num1/num2);
printf("\n");
printf("Modulus of the two numbers : %d %% %d = %d",num1,num2,num1%num2);
printf("\n");

return 0;

}