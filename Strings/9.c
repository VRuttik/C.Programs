// 9. Write a program to replace a pattern with another pattern in the text..

#include<stdio.h>
#include<string.h>

int main(){

    char str[200], pat[200], new_str[200], rep_pat[100];
    int i=0, j=0, k, n=0, copy_loop=0, rep_index=0;

    printf("\n Enter the string: ");
    scanf("%s", &str[i]);

    printf("\n Enter the pattern to be replaced: ");
    scanf("%s", &pat[j]);

    printf("\nEnter the replacing pattern: ");
    scanf("%s", &str[k]);
    
    while (str[i] != '\0')
    {
        j=0, k=i;
        while (str[k] == pat[j] && pat[j] != '\0')
        {
            k++;
            j++;
        }

        if (pat[j] == '\0')
        {
            copy_loop = k;
            while (rep_pat[rep_index] != '\0')
            {
                new_str[n] = rep_pat[rep_index];
                rep_index++;
                n++;
            }
            
        }

        new_str[n] = str[copy_loop];
        i++;
        copy_loop++;
        n++;  
    }
    
    new_str[n] = '\0';
    printf("\n The new string is: %s", new_str);

    return 0;
}