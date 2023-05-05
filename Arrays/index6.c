// Write a program to calculate the average of first n number.

#include<stdio.h>

int main(){
    
    int n, i=0, sum=0;
    float average;

    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    
    do{
    sum = sum + i;

    average = sum/2;
    i++;
    }while(i<=n);

    printf("\n The sum of first %d numbers is: %d", n, sum);
    printf("\n The average of first %d numbers is: %.2f", n, average);

    return 0;
}