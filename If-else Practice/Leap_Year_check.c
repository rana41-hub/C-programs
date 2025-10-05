#include<stdio.h>

int main ()
{

int year;

printf("Enter the Year : ");
scanf("%d",&year);

if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) //Neccessary condition for leap year
{

  printf("The given year is %d which is a Leap Year",year);

}

else {

printf("The given year is not a Leap Year");

}

}