// Write a progrm to find whether a number is even or odd using function.

#include <stdio.h>

int evenodd(int); // Function Declaration.
int main()
{

    int num, flag;
    flag = evenodd(&num); // Function Call.
    printf("Enter the number: ");
    scanf("%d", &num);

    if (flag == 1)
    {
        printf("\n %d is the even number.", num);
    }
    else
    {
        printf("\n %d is the odd number.", num);
    }
    return 0;
}
    int evenodd(int a)        // Function Header.
    { 
                              // Function Body.
        if (a%2 == 0)
            return 1;
        else
            return 0;
    }
