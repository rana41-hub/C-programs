//Implement a void minmax(int *a , int *b , int *min , int *max) function that takes two integer pointers a and b as input and assigns smaller value to min and larger value to max using call by reference . Write a main function to test it with different values.

#include<stdio.h>

void minmax(int * , int * , int * , int *);

int main () {

int num1 , num2 , min , max;

printf("Enter first number : ");
scanf("%d",&num1);

printf("Enter second number : ");
scanf("%d",&num2);

minmax(&num1 , &num2 , &min , &max);

printf("Out of %d and %d\n %d is min and %d is max",num1,num2,min,max);

  return 0;
}

void minmax (int *a , int *b , int *min , int *max) {

if (*a > *b)
{
  *max = *a;
  *min = *b;
}

else {

*max = *b;
*min = *a;
}

}