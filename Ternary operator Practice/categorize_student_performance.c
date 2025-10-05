#include<stdio.h>

int main ()
{

int score,maths,science,social_studies,computer,english;
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

score = maths + science + social_studies + computer + english;

printf("Your total score is %d out of 500",score);

printf("\n");

(score > 450) ? printf("High performance") : (score > 275 && score < 450) ? printf("Moderate performance") : printf("Low performance");

return 0;

}