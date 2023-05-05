// Write a c program to tranpose a 3X3 matrix.

#include<stdio.h>

int main(){

    int i, j, matrix[3][3], tranpose_matrix[3][3];

    printf("Enter the elements of the matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The elements of the matrix are: ");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\t%d", matrix[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            tranpose_matrix[i][j] = matrix[j][i];
        }
    }

    printf("The elements of the tranpose matrix are: ");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\t%d", tranpose_matrix[i][j]);
        }
    }

}