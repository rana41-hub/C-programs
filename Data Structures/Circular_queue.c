#include<stdio.h>
#define MAXSIZE 10

int circular_queue[MAXSIZE] , rear = -1 , front = -1;
void insert() , delete1() , display();

int main () {
    
    int choice;
    
    do{
        
        printf("-----CIRCULAR QUEUE-----\n");
        printf("1. INSERT\n2. DELETE\n3. DISPLAY\n 4. EXIT\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice) {
            
            case 1 : insert();
            break;
            case 2 : delete1();
            break;
            case 3 : display();
            break;
            case 4 : printf("Exit\n");
            default : printf("Invalid Choice\n");
            break;
            
        }
    } while(choice != 5);
}

void insert() {
    
    int n;
    
    if((rear + 1) % MAXSIZE == front) {   //OVERFLOW CONDITION IN CIRCULAR QUEUE
        
        printf("Queue is Overflow\n");
    }
    
    else {
        
        printf("Enter the value to Insert : ");
        scanf("%d" , &n);
        
        if (rear == -1 && front == -1) {  //CHECK IS THERE'S NO ELEMENT IN QUEUE AFTER CHECKING OVERFLOW CONDTION
            
            rear = 0;
            front = 0;
        } 
        
        else {
            
            rear = (rear + 1) % MAXSIZE;
        }
        
        circular_queue[rear] = n;
        
    }
}

void delete1 () {
    
    int n;
    
    if(rear == -1 && front == -1) {  //EMTPY CONDITION FOR CIRCULAR QUEUE
        
        printf("Queue is empty\n");  
    }
    
    else {
        
        n = circular_queue[front];
        
        if(rear == front) {
            
            rear = -1;
            front = -1;
            
        }
        
        else {
            
            front = (front + 1) % MAXSIZE;
            
        }
    } printf("Element %d deleted\n" , n);
}

void display () {
    
    int i;
    if(rear == -1 && front == -1) {
        
        printf("Queue is empty\n");
    }
    
    else {
        
        printf("Elements of Queue\n");
        for(i = front ; i != rear ; (i = (i + 1) % MAXSIZE)) {
            
            printf("%5d\n" , circular_queue[i]);
        }
        
        printf("%5d\n" , circular_queue[i]);
    }
}