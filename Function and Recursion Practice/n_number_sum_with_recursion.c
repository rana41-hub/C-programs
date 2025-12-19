#include<stdio.h>

int x;

int sum(int x) {
    
    int s = 0;
    
    if(x == 1) {
        
        return x;
    }
    
    else {
        
        s = x + sum(x - 1);
        return s;
    }
}

int main () {
    
    int a;
    printf("Enter the number : ");
    scanf("%d" , &x);
    
    a = sum(x);
    printf("%d" , a);
    
}