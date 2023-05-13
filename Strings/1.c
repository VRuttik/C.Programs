// 1. Write a program to find the length of the string.

#include<stdio.h>
#include<string.h>

int main(){

    char str[100], i=0, length;

    printf("\n Enter the string: ");
    scanf("%s", &str[i]);

    while (str[i] != '\0')
        i++;
        length = i;

        printf("\n The length of the string is: %d", length);
        return 0;
}