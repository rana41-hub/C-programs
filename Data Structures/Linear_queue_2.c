#include<stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE] , front = -1 , rear = -1 ;
void insert() , delete() , display();

int main() {

  int choice;

  do {

    printf("Linear Queue Implementation\n");
    printf("------------------------\n");
    printf("\n1.Insert \n2.Delete \n3.Display\n");
    printf("------------------------\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch(choice) {
      case 1 : {
        insert();
        break;
      }
      case 2 : {
        delete();
        break;
      }
      case 3 : {
        display();
        break;
      }
      default : {
        printf("Invalid Choice");
      }
    }
  }

    while(choice != 4);
    return 0;
}

void insert() {

  if(rear == MAXSIZE - 1) {

    printf("Queue Overflow\n");

  } 

  else {

    int n;
    printf("Enter the element to insert : ");
    scanf("%d",&n);
    rear++;
    front++;
    queue[rear] = n;
  }
  
}

void delete() {

  int deletedElement;

  if(rear == -1) {

    printf("Queue is empty\n");

  }
  else {

    deletedElement = queue[front];
    front--;
    printf("Deleted element is : %d\n",deletedElement);

  }
}

void display() {

  if (rear == -1) {
    printf("Queue is empty\n");
  } 
  else {
    printf("Elements in the queue are : \n");
    for(int i = front; i > -1 ; i--) {
      printf("%d\n", queue[i]);
    }
  }
}