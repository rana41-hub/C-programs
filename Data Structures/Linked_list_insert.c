#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *add;
};

struct Node *start, *temp, *new1 ,*prev , *next;

void create(void);
void display1(void);
void insert_first(void);
void insert_last(void);
void insert_middle(void);

int main() {
    int choice;

    do {
        printf("-----Linked List-----\n\n");
        printf("1. Create\n2. Display\n3. Insert at first\n4. Insert at last\n5 .Insert in Middle\n\n");

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
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n\n");
        }
    } while (choice != 6);

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

void insert_first () {
    
    if (start == NULL) {
        
        printf("Linked List not found");
    }
    
    else {
        
        int n;
        printf("Enter the value : ");
        scanf("%d" , &n);
        
        new1 = (struct Node*)(malloc(sizeof(struct Node)));
        
        new1 -> data = n;
        new1 -> add = NULL;
        new1 -> add = start;
        start = new1;
        
    }
}

void insert_last() {
    
    if (start == NULL) {
        
        printf("No Linked List found\n");
    }
    
    else {
        
        int n;
        printf("Enter the value : ");
        scanf("%d" , &n);
        
        new1 = (struct Node *)(malloc(sizeof(struct Node)));
        new1 -> data = n;
        new1 -> add = NULL;
        
        temp = start;
        while(temp -> add != NULL) {
            
            temp = temp -> add;
            
        }
        
        temp -> add = new1;
        
    }
} 

void insert_middle() {
    
    if(start == NULL) {
        
        printf("Linked List not found\n");
    }
    
    else {
        
        int n , pos , i=1;
        
        printf("Enter the position of insertion : ");
        scanf("%d" , &pos);
        
        printf("Enter the value : ");
        scanf("%d" , &n);
        
        new1 = (struct Node *)(malloc(sizeof(struct Node)));
        
        new1 -> data = n;
        new1 -> add = NULL;
        
        next = start;
        
        while(i < pos) {
            
            prev = next;
            next = next -> add;
            i++;
        }
        
        prev -> add = new1;
        new1 -> add = next;
    }
}