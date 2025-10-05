#include<stdio.h>

int main () {

long long num;

printf("Enter the number : ");
scanf("%lld",&num);

if (num % 2 == 0)
{
  printf("The number entered is %lld which is even",num);
}

else 
{
  printf("The number entered is %lld which is odd",num);
}

return 0;

}