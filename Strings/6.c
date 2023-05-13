// 6. Write a program to extract a substring rom the middle of a given string.

#include<stdio.h>
#include<string.h>

int main(){

    char str[100], substr[100];
    int i=0, j=0, n, m;

    printf("\n Enter the main string: ");
    scanf("%s", &str[i]);

    printf("\n Enter the position from which to start the substring: ");
    scanf("%d", &m);

    printf("\n Enter the length of the substring: ");
    scanf("%d", &n);

    i=m;

    while (str[i] != '\0' && n>0){
        
        substr[j] = str[i];
        i++;
        j++;
        n--;
    }

    substr[j] = '\0';
    printf("\n The substring is: %s", substr);

    return 0;
}