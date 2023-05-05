/* In a small company there are five salesmen. Each salesmen is supposed to sell three
products. Write a program using a 2D array to print (i) the total sales  
*/

#include<stdio.h>

int main(){

    int sales[5][3], i, j, total_sales=0;

    //Input data.
    printf("Enter the data\n");
    printf("****************\n");
    for(i=0;i<5;i++){
        printf("Enter the sales of 3 items sold by salesman %d: ", i+1);
        for(j=0;j<3;j++)
        scanf("%d",&sales[i][j]);
    }

    //Print total sales by each salesman

    for(i=0;i<5;i++){
        total_sales=0;
        for(j=0;j<3;j++)
        total_sales += sales[i][j];
        printf("\n Total sales by salesmen %d = %d", i+1, total_sales);
    }

    //Total sales of each item.

    for(i=0;i<3;i++){
        total_sales=0;
        for (j=0;j<5;j++)
        total_sales += sales[i][j];
        printf("\n Total sales of item %d = %d", i+1, total_sales);
        
    }
    return 0;
}