#include<stdio.h>

int main ()
{

  int num,i = 1,product = 1;

printf("Enter the number : ");
scanf("%d",&num);

while (i <= num)
{
  product = product * i;
  i++;
}

printf("Factorial of %d is...\n",num);
printf("%d",product);

return 0;

}