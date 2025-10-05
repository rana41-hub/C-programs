#include<stdio.h>

int fibonacci (int position);

int terms;

int main () {

printf("Enter the number of terms needed :");
scanf("%d",&terms);

for (int i = 0; i < terms; i++)
{
  printf(" %d",fibonacci(i));
}

  return 0;
}

int fibonacci(int position) {

if (position <= 1) {

  return position;
}

int current = fibonacci(position - 1) + fibonacci(position - 2);
return current;

}