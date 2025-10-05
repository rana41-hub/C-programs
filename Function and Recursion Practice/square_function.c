#include<stdio.h>

void square (int);  //FUNCTION DECLARATION

int num;  // GLOBAL DECLARATION OF VARIABLE

int main () {

printf("Enter the number : ");
scanf("%d",&num);

square(num);  //FUNCTION CALLING

return 0;
}

void square (int a) {                 //FUNCTION DEFINITION

int result = a * a;

printf("Square of %d is %d",num,result);

}