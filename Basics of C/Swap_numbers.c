#include<stdio.h>

int main()
{

int num1,num2,t;

printf("Enter the first number : ");
scanf("%d",&num1);;

printf("Enter the second number : ");
scanf("%d",&num2);

t = num1;
num1 = num2;
num2 = t;

printf("After Swapping...\n\n");

printf("First number is :%d\n",num1);
printf("Second number is :%d",num2);

}