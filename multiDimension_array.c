#include<stdio.h>
int main(){
    int array[2][2][2], i, j, k;
    printf("\n Enter the elements of the matrix: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
            printf("arra[%d][%d][%d] = ", i,j,k);
            scanf("%d", &array[i][j][k]);
            }
        }
    }
    
    printf("\n The marix is: ");
        for(i=0;i<2;i++){
            printf("\n");
        for(j=0;j<2;j++){
            printf("\n");
            for(k=0;k<2;k++){
            printf("arra[%d][%d][%d] = %d\t", i,j,k,array[i][j][k]);
            }
        }
    }
    return 0;
}
