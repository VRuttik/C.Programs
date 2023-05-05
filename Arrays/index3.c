// Write a program to find whether a number is even or odd. 

#include<stdio.h>

int main(){

    int n;

    printf("\n Enter a number: ");
    scanf("%d", &n);

    if(n%2 == 0){
        printf("The enetred number is even.");
    }
    else{
        printf("The entered number is odd.");
    }

    return 0;
}