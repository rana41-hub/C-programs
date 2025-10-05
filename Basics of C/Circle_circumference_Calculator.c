#include<stdio.h>

int main ()
{

double radius,circumference;

const float PI = 3.14159265359;

printf("Enter the radius of the circle : ");
scanf("%lf",&radius);

circumference = 2*PI*radius;

printf("Circumference of the Circle is :%lf",circumference);

}