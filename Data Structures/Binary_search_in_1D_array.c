#include<stdio.h>

int main () {
    
    int arr[50] , i , n , first = 0 , middle = 0 , last , search;
    
    printf("Enter array size : ");
    scanf("%d" , &n);
    
    for(i = 0 ; i < n ; i++){
        printf("Enter array element in ascending order : ");
        scanf("%d" , &arr[i]);
    }
    
    printf("Array elements are : ");
    for(i = 0 ; i < n ; i++){
        
        printf("\t%d" , arr[i]);
    }
    
    printf("\n");
    
    printf("Enter the element to search : ");
    scanf("%d" , &search);
    
    last = n - 1;
    
    while(first <= last) {
        
        middle = (first + last)/ 2;
        
        if(arr[middle] < search) {
            
            first = middle + 1;
        
        }
        
        else if(arr[middle] == search) {
            
            printf("%d found at position %d" , search , middle);
            break;
        }
        
        else {
            
            last = middle - 1;
        }
    }
    
    if(first > last){
        
        printf("Element not found\n");
    }
    return 0;
    
}