#include <stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE];
int front = -1, rear = -1;

void insert();
void delete();
void display();

int main() {
    int choice;
    do {
        printf("\nLinear Queue Implementation\n");
        printf("----------------------------\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid Choice\n");
        }
    } while (choice != 4);

    return 0;
}

void insert() {
    int n;
    if (rear == MAXSIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &n);

    if (front == -1) // first insertion
        front = 0;
    rear++; 
    queue[rear] = n;

    printf("%d inserted into the queue\n", n);
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow / Empty\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;

    if (front > rear) // reset queue if empty
        front = rear = -1;
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Elements in the queue:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
 