/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,avg;

 printf("enter mark 1=");
 scanf("%d", &mark1);

  printf("enter mark =");
  scanf("%d", &mark2);

avg = (mark1+mark2)/2;

printf("your avarage is= %d",avg);

  return 0;
}

