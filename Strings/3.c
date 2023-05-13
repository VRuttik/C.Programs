// 3. Write a program to append a string to another string.

#include<stdio.h>
#include<string.h>

int main(){

    char Dest_Str[100], Source_Str[100];
    int i=0, j=0;

    printf("\n Enter the destination string : ");
    scanf("%s", &Dest_Str[i]);

    printf("\n Enter the source string : ");
    scanf("%s", &Source_Str[j]);

    while (Dest_Str[i] != '\0')
    i++;
    while (Source_Str[j] != '\0'){
        Dest_Str[i] = Source_Str[j];
        i++;
        j++;
    }
Dest_Str[i] = '\0';
printf("\n After appending, the destination string is: %s ", Dest_Str);

return 0;
}