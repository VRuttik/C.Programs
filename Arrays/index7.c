// Write a program to determine whether a given number is a prime number or composite number.

#include<stdio.h>

int main(){

    int flag=0, i, num;

    printf("\n Enter any number: ");
    scanf("%d", &num);

    for(i=2;i<num/2;i++){

        if(num%i==0){
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("%d is the composite number.", num);
    }
    else{
        printf("%d is the prime number.", num);
    }

    return 0;
}