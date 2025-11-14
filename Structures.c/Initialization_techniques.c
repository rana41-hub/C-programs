#include<stdio.h>

struct Student {
    
    char name[50];
    int roll_no;
    float marks;
};

int main () {
    
    //Direct Initialization (Order matters)
    
    struct Student s1 = {"Ram" , 42 , 98.2};
    
    //Designated Initialization (Order doesn't matter)
    
    struct Student s2 = {.roll_no = 48 , .name = "Siya" , .marks = 99};
    
    //Zero Initialization (Every member's value initializes to 0)
    
    struct Student s3 = {0};
    
    //Copy Initialization (Copy the values of existing variable)
    
    struct Student s4 = s2;
    s4.roll_no = 41;
    
    printf("Student 1 details:\n Name = %s\n Roll no. = %d\n Marks = %.2f\n" , s1.name , s1.roll_no , s1.marks);
    printf("\n");
    printf("Student 2 details:\n Name = %s\n Roll no. = %d\n Marks = %.2f\n" , s2.name , s2.roll_no , s2.marks);
    printf("\n");
    printf("Student 3 details:\n Name = %s\n Roll no. = %d\n Marks = %.2f\n" , s3.name , s3.roll_no , s3.marks);
    printf("\n");
    printf("Student 4 details:\n Name = %s\n Roll no. = %d\n Marks = %.2f\n" , s4.name , s4.roll_no , s4.marks);
    
    return 0;
}


