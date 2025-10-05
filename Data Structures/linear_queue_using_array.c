#include<stdio.h>
#define maxsize 10
int queue[maxsize], front = 0 , rear = -1;
void insert() , delete1() , display();
int main () {

  int choice;
  do {

    printf("\n\n----QUEUE IMPLEMENTATION USING ARRAY----\n");
    printf("\n1. Insert\n2. Delete\n3. Display");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {

      case 1 : insert();
               break;

      case 2 : delete1();
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

void insert () {

  int n;

  if(rear == maxsize - 1) {

    printf("Queue is full");

  } 

  else {

    printf("Enter the element to insert : ");
    scanf("%d",&n);
    rear++;
    queue[rear] = n;

  }

}

void delete1 () {

  int n;
  if(front > rear) {

    printf("Queue is already empty");

  }

  else {

    n = queue[front];
    printf("Element deleted is %d",n);
    front++;

  }

}

void display () {

  int i;

  if(front > rear) {

    printf("No element in Queue");

  }

  else {

    printf("Queue elements are...\n\n");

    for (i = front ; i <= rear ; i++) {

      printf("%d\n",queue[i]);

    }

  }

}
