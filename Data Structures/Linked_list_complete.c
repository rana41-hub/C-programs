#include<stdio.h>

struct Node {
    
    int data;
    struct Node *add;
}; struct Node *start , *temp , *new1;

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
        
        case 2 : insert_first();
        break;
        
        case 3 : insert_middle();
        break;
        
        case 4 : insert_last();
        break;
        
        case 5 : delete_first();
        break;
        
        case 6 : delete_middle();
        break;
        
        case 7 : delete_last();
        break;
        
        case 8 : display1();
        break;
        
        default : printf("Invalid choice\n\n");
        
    }
      } while (choice != 9);
      
      return 0;
    
}

void create () {
    
    int ch , n;
    
    printf("Enter the value : "); //Taking the value
    scanf("%d" , &n);
    
    start = (struct Node *)(malloc(sizeof(struct Node))); //Creating the space/node in memory
    
    start -> data = n; //Inserting the value in created space/node
    start -> add = NULL;
    temp = start;       
    
    printf("Want to continue (Y/N): ");
    scanf("%c", &ch);
    
    while(ch == 'Y') {
        
        printf("Enter the value : "); //Taking the value again
        scanf("%d" , &n);
        
        new1 = (start Node*)(malloc(sizeof(struct Node)));
        new1 -> data = n; //Creating next space/node
        new1 -> add = NULL;
        
        temp -> add = new1; //Linking the first node with next node
        temp = temp -> add; //Moving temp to next node
        
        printf("Want to continue (Y/N): ");
        scanf("%c", &ch);
        
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