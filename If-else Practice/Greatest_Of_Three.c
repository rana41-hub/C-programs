#include<stdio.h>

int main ()
{

double num1,num2,num3;

printf("Enter the first number : ");
scanf("%lf",&num1);

printf("Enter the second number : ");
scanf("%lf",&num2);

printf("Enter the third number : ");
scanf("%lf",&num3);

if (num1 > num2 && num1>num3)
{
  printf("%lf is the greatest",num1);
}

else if (num2 > num3)
{
  printf("%lf is the greatest",num2);
}

else {

printf("%lf is greatest",num3);

}

}