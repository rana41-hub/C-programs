#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *add;
};

struct Node *start, *temp, *new1;

void create(void);
void display1(void);

int main() {
    int choice;

    do {
        printf("-----Linked List-----\n\n");a
        printf("1. Create\n2. Display\n3. Exit\n\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;

            case 2:
                display1();
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n\n");
        }
    } while (choice != 3);

    return 0;
}

void create() {
    char ch;
    int n;

    printf("Enter the value : ");    // Taking the value
    scanf("%d", &n);

    start = (struct Node *)malloc(sizeof(struct Node));   // Creating the first node
    start->data = n;
    start->add = NULL;
    temp = start;

    printf("Want to continue (Y/N): ");
    scanf(" %c", &ch);   // space before %c to skip newline

    while (ch == 'Y' || ch == 'y') {
        printf("Enter the value : ");
        scanf("%d", &n);

        new1 = (struct Node *)malloc(sizeof(struct Node));
        new1->data = n;
        new1->add = NULL;

        temp->add = new1;      // Linking current node to new node
        temp = temp->add;      // Moving temp to new node

        printf("Want to continue (Y/N): ");
        scanf(" %c", &ch);     // again with space
    }
}

void display1() {
    if (start == NULL) {
        printf("Linked list not found\n");
    } else {
        temp = start;
        while (temp != NULL) {
            printf("%d\t", temp->data);
            temp = temp->add;
        }
        printf("\n");
    }
}
