#include<stdio.h>

int sum(int , int , int , int);  //FUNCTION DECLARATION

int main () {

int num1 , num2 , num3 , num4;

printf("Enter the first number : ");
scanf("%d",&num1);

printf("Enter the second number : ");
scanf("%d",&num2);

printf("Enter the third number : ");
scanf("%d",&num3);

printf("Enter the fourth number : ");
scanf("%d",&num4);

sum(num1 , num2 , num3 , num4);  //FUNCTION CALLING

  return 0;
}

int sum (int a , int b , int c , int d) {   //FUNCTION DEFINITION

int add = a + b + c + d;

printf("Sum of the entered numbers is %d\n",add);

return add;

}