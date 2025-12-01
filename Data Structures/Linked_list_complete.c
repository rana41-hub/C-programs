#include<stdio.h>
#include<stdlib.h>

struct Node {
    
    int data;
    struct Node *add;
}; struct Node *start , *temp , *new1 , *prev , *next ;

void create() , insert_first() , insert_middle() , insert_last() , delete_first() , delete_middle() , delete_last() , display1() ;

int main () {

    int choice;
    
    do {
        
        printf("-----Linked List-----\n\n");
    
        printf("1.Create\n2.Insert on first\n3.Insert on middle\n4.Insert on last\n5.Delete from first\n6.Delete from middle\n7.Delete from last\n8.Display\n\n");
    
        printf("Enter your choice : ");
        scanf("%d",&choice);
    
    switch(choice) {
        
        case 1 : create();
        break;
        
        case 2 : display1();
        break;
        
        case 3 : insert_first();
        break;
        
        case 4 : insert_middle();
        break;
        
        case 5 : insert_last();
        break;
        
        case 6 : delete_first();
        break;
        
        case 7 : delete_middle();
        break;
        
        case 8 : delete_last();
        break;

        case 9 : printf("Exiting...");
        break;
        
        default : printf("Invalid choice\n\n");
        
    }
      } while (choice != 10);
      
      return 0;
    
}

void create () {
    
    char ch ; int n;
    
    printf("Enter the value : "); //Taking the value
    scanf("%d" , &n);
    
    start = (struct Node *)(malloc(sizeof(struct Node))); //Creating the space/node in memory
    
    start -> data = n; //Inserting the value in created space/node
    start -> add = NULL;
    temp = start;       
    
    printf("Want to continue (Y/N): ");
    scanf(" %c", &ch);
    
    while(ch == 'Y') {
        
        printf("Enter the value : "); //Taking the value again
        scanf("%d" , &n);
        
        new1 = (start Node*)(malloc(sizeof(struct Node)));
        new1 -> data = n; //Creating next space/node
        new1 -> add = NULL;
        
        temp -> add = new1; //Linking the first node with next node
        temp = temp -> add; //Moving temp to next node
        
        printf("Want to continue (Y/N): ");
        scanf(" %c", &ch);
        
    }
    
}

void display1 () {
    
    if(start == NULL) {
        
        printf("Linked list not found\n");
    }
    
    else {
        
        temp = start;
        while(temp != NULL) {
            
            printf("%d \t" , temp -> data);
            temp = temp -> add;
        }
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

