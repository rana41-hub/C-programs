//This program is for caclculating percentage based on the marks and assigning grade according to the percentage...

#include<stdio.h>

int main (){

int marks,maths,science,social_studies,computer,english;
float percentage;

printf("Enter the marks in Maths : ");
scanf("%d",&maths);


printf("Enter the marks in Science : ");
scanf("%d",&science);


printf("Enter the marks in Social studies : ");
scanf("%d",&social_studies);


printf("Enter the marks in Computer : ");
scanf("%d",&computer);


printf("Enter the marks in English : ");
scanf("%d",&english);

marks = maths + science + social_studies + computer + english;

percentage = ((float)marks/500) * 100;

printf("Your Percentage is %f",percentage);

printf("\n");

if (percentage >= 90)
{
  printf("You have secured Grade A");
}

else if (percentage >= 75)
{
  printf("You have secured Grade B");
}

else if (percentage >= 60)
{
  printf("You have secured Grade C");
}

else if (percentage >= 30)
{
  printf("You have secured Grade D");
}

else if (percentage < 30)
{
  printf("Fail");
}

return 0;

}