#include<stdio.h>

void main(){
    
    int array[10][10], i, j;
    int n, m;
    
    printf("\n Enter the size of the m: ");
    scanf("%d", &n);
    
    printf("\n Enter the size of the n: ");
    scanf("%d", &m);
    
    printf("\n Enter the array elements: ");
    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
            printf("\n array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("The array elements in the matrix form is: ");
    
    for(int i=0;i<m;i++){
        printf("\n");
        
        for(int j=0;j<n;j++){
            printf("%d\t", array[i][j]);
        }
    }
}
