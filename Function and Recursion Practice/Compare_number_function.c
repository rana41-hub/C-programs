#include<stdio.h>

void max (float , float);

int main () {

float num1 , num2;

printf("Enter first number :");
scanf("%f",&num1);

printf("Enter second number :");
scanf("%f",&num2);

max(num1 , num2);

  return 0;
}

void max (float a , float b) {

if (a > b)
{
  printf("%f is greater than %f",a,b);
}

else if (a < b)
{
  printf("%f is greater than %f",b,a);
}

else {

  printf("Both numbers entered are equal");
}

}