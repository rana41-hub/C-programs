#include<stdio.h>

struct Student {

  int roll_no;
  char name[50];
  float marks;
};

int main () {

  struct Student s1;

  printf("Enter student 1 roll number : ");
  scanf("%d" , &s1.roll_no);
  printf("Enter student 1 name : ");
  scanf("%s" , &s1.name);
  printf("Enter student 1 marks : ");
  scanf("%f" , &s1.marks);

  printf("\n");

  struct Student s2;

  printf("Enter student 2 roll number : ");
  scanf("%d" , &s2.roll_no);
  printf("Enter student 2 name : ");
  scanf("%s" , &s2.name);
  printf("Enter student 2 marks : ");
  scanf("%f" , &s2.marks);

  printf("\n");

  struct Student s3;

  printf("Enter student 3 roll number : ");
  scanf("%d" , &s3.roll_no);
  printf("Enter student 3 name : ");
  scanf("%s" , &s3.name);
  printf("Enter student 3 marks : ");
  scanf("%f" , &s3.marks);

  printf("\n");
  
  printf("----Student details----\n\n");

  printf("Student 1 details....\n");
  printf("Roll no. : %d\n Name : %s\n Marks : %.2f\n\n", s1.roll_no , s1.name , s1.marks);

  printf("Student 2 details....\n");
  printf("Roll no. : %d\n Name : %s\n Marks : %.2f\n\n", s2.roll_no , s2.name , s2.marks);

  printf("Student 3 details....\n");
  printf("Roll no. : %d\n Name : %s\n Marks : %.2f\n\n", s3.roll_no , s3.name , s3.marks);
  
  return 0;
}

