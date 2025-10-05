#include<stdio.h>

int main ()
{

float temperature,convert;

printf("Enter the temperature in  Fahrenheit : ");
scanf("%f",&temperature);

convert = (temperature - 32) * 5/9;

printf("Temperature in Celsius : %f",convert);


}