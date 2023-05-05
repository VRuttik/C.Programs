// Write a program which illustrates the use of a pointer to a three-dimensional array.

#include <stdio.h>

int main()
{

    int i, j, k, arr[2][2][2];
    int(*parr)[2][2] = arr[0];

    printf("\n Enter the elements of a 2x2x2 array: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\n The elemets of the 2x2x2 array are: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++);{
            for(k=0;k<2;k++){
                printf("\t %d", *(*(*(parr+i)+j)+k));
            }
        }
    }

    return 0;
}