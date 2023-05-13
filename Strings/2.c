// 2. Write a program to convert the lower case characters of a string into uppercase.

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100], upper_str[100], i=0;

    printf("\n Enter the string: ");
    scanf("%s", &str[i]);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32;
        else
            upper_str[i] = str[i];
        i++;
    }

    printf("\n The string converted into uppercase is: %s", upper_str);

    return 0;
}