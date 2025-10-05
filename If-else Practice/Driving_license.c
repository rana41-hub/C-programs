#include<stdio.h>

int main ()
{

int age;

printf("Enter your age : ");
scanf("%d",&age);

if (age >= 18)
{
  printf("Your age is %d , you are eligible for License",age);
}

else {

printf("Your age is %d , you are not eligible for the License",age);

}

}