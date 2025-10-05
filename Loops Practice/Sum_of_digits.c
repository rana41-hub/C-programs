#include<stdio.h>

int main ()
{

int num , sum = 0;

printf("Enter the number : ");
scanf("%d",&num);

printf("Sum of digits of %d is...\n",num);

while (num > 0)
{
  sum = sum + num % 10;
  num = num/10;
 
}

printf("%d",sum);

return 0;

}