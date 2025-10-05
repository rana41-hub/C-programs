#include<stdio.h>

int main () {

int num = 20;

int *ptr;

ptr = &num;

printf("Value of num is %d\n",*ptr);

printf("After changing the value...\n");

*ptr = 30;

printf("New value of num is %d",num);

  return 0;
}