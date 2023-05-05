
// Write a program to convert an integer into the corresponding floating point number.

#include<stdio.h>

int main(){

    float f_number;
    int i_number;

    printf("\n Enter any integer: ");
    scanf("%d", &i_number);

    f_number = (float)i_number;
    
    printf("\n The floating point variant of %d is = %f", i_number, f_number);

    return 0;
}