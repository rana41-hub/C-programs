#include<stdio.h>

int main () {

int num , i = 2;

printf("Enter the number : ");
scanf("%d",&num);

while (i <= num - 1)
{
  if (num % i == 0)
  {
    printf("%d is not prime",num);
    return 0;
  }

}

printf("%d is prime",num);
return 0;
  
}