// Write a program to enter n number of digits. Form a number using these digits.

#include<stdio.h>
#include<math.h>
int main(){

    int number=0, digit[10], numberofdigits, i;

    printf("Enter the number of digits: ");
    scanf("%d",&numberofdigits);
    for(i=0;i<numberofdigits;i++){
        printf("Enter the digit at position %d: ", i+1);
        scanf("%d", &digit[i]);
    }

    i=0;

    while (i<numberofdigits){
        number = number + digit[i] * pow(10, i);
        i++;
    }
    printf("\n The number is: %d", number);
    return 0;
}