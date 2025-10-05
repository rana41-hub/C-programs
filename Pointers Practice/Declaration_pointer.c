#include<stdio.h>

int main () {

int num1 = 20 , num2 = 10;

int *ptr1;

ptr1 = &num1;

int *ptr2 = &num2;

printf("Value of num1 = %d and address of num1 = %p\n",*ptr1,&ptr1);
printf("Value of num2 = %d and address of num2 = %p",*ptr2,&ptr2);

  return 0;
}