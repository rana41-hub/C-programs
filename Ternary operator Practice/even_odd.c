#include<stdio.h>

int main ()
{

int num1;

printf("Enter the first number : ");
scanf("%d",&num1);

(num1 % 2 == 0) ? printf("%d is Even",num1) : printf("%d is Odd",num1);

return 0;

}