#include<stdio.h>

int main () {
    
    int arr[5] , i , n;
    
    for(i = 0 ; i < 5 ; i++){
        
        printf("Enter array element : ");
        scanf("%d",&arr[i]);
    }
    
    printf("Array elements are : ");
    
    for(i = 0 ; i < 5 ; i++){
        
        printf("\t%d" , arr[i]);
    }
    
    printf("\n");
    
    printf("Enter the array element to search : ");
    scanf("%d" , &n);
    
    for(i = 0 ; i < 5 ; i++) {
        
        if(arr[i] == n) {
            
            printf("Element %d found at position %d",n,i);
            break;
        }
        
    }
    
    if(i == 5) {
        
        printf("Element not found\n");
    }
    
    return 0;
    
}