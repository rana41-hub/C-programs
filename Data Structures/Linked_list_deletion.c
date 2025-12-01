#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *add;
};

struct Node *start, *temp, *new1, *prev, *next;

void create(void);
void display1(void);
void insert_first(void);
void insert_last(void);
void insert_middle(void);
void delete_first(void);
void delete_last(void);
void delete_middle(void);

int main() {
    int choice;

    do {
        printf("-----Linked List-----\n\n");
        printf("1. Create\n2. Display\n3. Insert at first\n4. Insert at last\n5 .Insert in Middle\n6. Delete First node\n7. Delete Last node\n8. Delete Middle node\n9. Exit\n\n");

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
                insert_first();
                break;

            case 4:
                insert_last();
                break;

            case 5:
                insert_middle();
                break;

            case 6:
                delete_first();
                break;

            case 7:
                delete_last();
                break;
                
            case 8:
                delete_middle();
                break;

            case 9:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n\n");
        }
    } while (choice != 10);

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

void insert_first() {
    if (start == NULL) {
        printf("Linked List not found\n");
    } else {
        int n;
        printf("Enter the value : ");
        scanf("%d", &n);

        new1 = (struct Node *)(malloc(sizeof(struct Node)));

        new1->data = n;
        new1->add = NULL;
        new1->add = start;
        start = new1;
    }
}

void insert_last() {
    if (start == NULL) {
        printf("No Linked List found\n");
    } else {
        int n;
        printf("Enter the value : ");
        scanf("%d", &n);

        new1 = (struct Node *)(malloc(sizeof(struct Node)));
        new1->data = n;
        new1->add = NULL;

        temp = start;
        while (temp->add != NULL) {
            temp = temp->add;
        }

        temp->add = new1;
    }
}

void insert_middle() {
    if (start == NULL) {
        printf("Linked List not found\n");
    } else {
        int n, pos, i = 1;

        printf("Enter the position of insertion : ");
        scanf("%d", &pos);

        printf("Enter the value : ");
        scanf("%d", &n);

        new1 = (struct Node *)(malloc(sizeof(struct Node)));

        new1->data = n;
        new1->add = NULL;

        next = start;

        while (i < pos) {
            prev = next;
            next = next->add;
            i++;
        }

        prev->add = new1;
        new1->add = next;
    }
}

void delete_first() {
    if (start == NULL) {
        printf("Linked List not found\n");
    } else {
        temp = start;
        start = start->add;

        printf("Deleted node is %d\n", temp->data);
        free(temp);
    }
}

void delete_last() {
    if (start == NULL) {
        printf("Linked List not found\n");
    }

    // only one node in the list
    else if (start->add == NULL) {
        printf("Deleted node is %d\n", start->data);
        free(start);
        start = NULL;
    }

    // more than one node
    else {
        temp = start;

        while (temp->add != NULL) {
            prev = temp;
            temp = temp->add;
        }

        printf("Deleted node is %d\n", temp->data);
        prev->add = NULL;
        free(temp);
    }
}

void delete_middle() {
    int pos, i = 1;

    if (start == NULL) {
        printf("Linked List not found\n");
        return;
    }

    printf("Enter the position : ");
    scanf("%d", &pos);

    if (pos <= 0) {
        printf("Invalid position\n");
        return;
    }

    // Case 1: delete first node (position 1)
    if (pos == 1) {
        temp = start;
        start = start->add;
        printf("Deleted node is %d\n", temp->data);
        free(temp);
        return;
    }

    // Case 2: delete from middle / end
    temp = start;
    while (i < pos && temp != NULL) {
        prev = temp;
        temp = temp->add;
        i++;
    }

    // If position is greater than length
    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }

    prev->add = temp->add;
    printf("Deleted node is %d\n", temp->data);
    free(temp);
}


