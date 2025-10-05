//This Program is for Checking whether the number entered by the user is Positive , negative or Zero

#include<stdio.h>

int main ()
{

double num;

printf("Enter the number you wanna check :");
scanf("%lf",&num);

if(num > 0) 

{

   printf("The number you entered is %lf which is positive",num);

}

else if (num < 0) 

{
  
   printf("The number you entered is %lf which is negative",num);

}

else {

   printf("The number you entered is 0");

}

return 0;

}