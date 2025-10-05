#include<stdio.h>

int main () 
{

int num,i = 1;

printf("Enter the number : ");
scanf("%d",&num);

printf("Multiplication table of %d is...\n",num);

while (i <= 10)
{
  printf("%d X %d = %d\n",num,i,num*i);
  i++;
}

return 0;

}