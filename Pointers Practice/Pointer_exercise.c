#include<stdio.h>

int main () {

char name;

char *ptr;

ptr = &name;

printf("Enter the character : ");

scanf("%c",&name);

printf("Character entered is %c",*ptr);

  return 0;
}