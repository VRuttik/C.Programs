// Write a program to find the largest of three numbers using ternary operator.

#include<stdio.h>

int main(){

  int number1, number2, number3, larger_number;

  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);
  printf("Enter the third number: ");
  scanf("%d", &number3);

  larger_number = number1>number2?(number1>number3?number1:number3):(number2>number3?number3:number3);

  printf("\n Among the three numbers the largest number is: %d", larger_number);

  return 0;
}
