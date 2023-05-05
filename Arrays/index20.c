// Write a c program to read and display a 3X3 matrix.

#include<stdio.h>

int main(){

    int i, j, matrix[3][3];

    printf("Enter the element of the matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The elements of the matrix are");
    for(i=0;i<3;i++){
        
        printf("\n");
        for(j=0;j<3;j++){
            printf("\t%d", matrix[i][j]);
        }
    }

    return 0;
}