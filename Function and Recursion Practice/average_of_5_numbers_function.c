#include<stdio.h>

float get_average(int , int , int , int , int);

int main () {

int num1 , num2 , num3 , num4 , num5;

printf("Enter first number :");
scanf("%d",&num1);

printf("Enter second number :");
scanf("%d",&num2);

printf("Enter third number :");
scanf("%d",&num3);

printf("Enter fourth number :");
scanf("%d",&num4);

printf("Enter fifth number :");
scanf("%d",&num5);

get_average(num1 , num2 , num3 , num4 , num5);

  return 0;
}

float get_average(int a , int b, int c , int d , int e){

float average = (a + b + c + d + e)/5.0;

printf("Average of entered number is : %f",average);

}