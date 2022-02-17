/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int M1,M2,sum;
  float average;

  printf("enter the mark of subject 1: ");
  scanf("%d",&M1);
  printf("enter the mark of subject 2: ");
  scanf("%d",&M2);
  sum=M1+M2;
  average=sum/2;
  printf("average is: %.2f",average);
  return 0;
}

