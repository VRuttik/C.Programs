// Write a program to add two numbers using pointers and functions.

#include<stdio.h>

void sum (int*, int*, int*);

int main(){

    int num1, num2, total;

    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter second number: ");
    scanf("%d",&num2);

    sum(&num1, &num2, &total);

    printf("\n Total = %d", total);

    return 0;
}

void sum (int *a,int *b,int *t){
    *t = *a + *b;
}