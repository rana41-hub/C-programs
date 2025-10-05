#include<stdio.h>

int main () {

int num , rev = 0;

printf("Enter the number :");
scanf("%d",&num);

int copy = num;

while (num > 0)
{
  rev = rev * 10 + copy % 10;
  copy = copy/10;
  }

printf("Reverse of %d is %d",num,rev);

return 0;

}