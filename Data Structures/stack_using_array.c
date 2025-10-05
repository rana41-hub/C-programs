#include<stdio.h>
#define maxsize 10

int stack[maxsize] , top = -1;
void push() , pop() , display();

int main () {

  int choice;

  do {

    printf("\n----STACK IMPLEMENTATION USING ARRAY----\n");
    printf("\n1. Push\n2. Pop\n3. Display");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {

      case 1 : push();
               break;

      case 2 : pop();
               break;

      case 3 : display();
               break;

      case 4 : printf("Exit");
               break;

      default : printf("Invalid choice");
                break;
     }

 }

while(choice != 4);
return 0;
}

void push () {

int n;
if (top == maxsize - 1) {

  printf("Stack Overflow");

}

else {

printf("Enter the element to push : ");
scanf("%d",&n);
top++;
stack[top] = n;
printf("Element pushed is %d\n",n);

}

}

void pop () {

int n;

if(top == -1) {

printf("Stack is already empty");

}

else {

n = stack[top];
top--;
printf("Popped element %d",n);

}

}

void display () {

int i;
if(top == -1) {

  printf("No element in stack");
}

else {

  printf("Elements in stack are : \n");

  for (i = top ; i >= 0 ; i--) {

      printf("%d\n",stack[i]);

  }

}

}