#include<stdio.h>

void greet ();  //FUNCTION DECLARATION

char name[100];

int main () {

  printf("Please enter your name : ");
  fgets(name , sizeof(name) , stdin);

  greet();  //FUNCTION CALLING

  return 0;
}

void greet () {       //FUNCTION DEFINITION

printf("Good morning %s\n",name);    

}