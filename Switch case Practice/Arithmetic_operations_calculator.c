#include<stdio.h>

int main ()
{

int num1,num2;
char operation;

printf("Enter the first number :");
scanf("%d",&num1);

printf("Enter the second number :");
scanf("%d",&num2);

printf("Enter the operation you want to perform(+,-,*,/) :");
scanf(" %c",&operation);

switch (operation)
{
  case '+':
  printf("Sum of the given number is %d + %d = %d",num1,num2,num1+num2);
  break;

  case '-':
  printf("Difference of the given number is %d - %d = %d",num1,num2,num1-num2);
  break;

  case '*':
  printf("Multiplication of the given number is %d X %d = %d",num1,num2,num1*num2);
  break;

  case '/':
  printf("Division of the given number is %d / %d = %d",num1,num2,num1/num2);
  break;

default:
  break;
}

return 0;

}