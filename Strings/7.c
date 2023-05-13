// 7. Write a program to insert a string in the main text.

#include<stdio.h>
#include<string.h>

int main(){

    char text[100], str[100], ins_text[100];
    int i=0, j=0, k=0, pos;

    printf("\n Enter the main text: ");
    scanf("%s", &text[i]);

    printf("\n Enter the position at which the string string has to be inserted: ");
    scanf("%d", &pos);

    printf("\n Enter the string to be inserted: ");
    scanf("%s", &str[k]);

    while (text[i] != '\0')
    {
        if (i==pos)
        {
            while (str[k] != '\0')
            {
                ins_text[j] = str[k];
                j++;
                k++;
            }
            
        }
        else{
            ins_text[j] = text[i];
            j++;
        }
        i++;
    }

    ins_text[j] = "\0";
    printf("\n The new string is: %s", ins_text);

    return 0;
}