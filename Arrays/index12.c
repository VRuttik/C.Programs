// Write a program to find the second largest of n numbers using an array.

#include<stdio.h>

int main(){

    int i, n, arr[20], large, second_large;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

        large=arr[0];

        for(i=1;i<n;i++){
            if(arr[i]>large)
            large=arr[i];
        }

        second_large=arr[1];

        for(i=0;i<n;i++){
            if(arr[i] != large){

                if (arr[i]>second_large)
                    second_large=arr[i];            
            }
        } 

        printf("\nThe numbers you entered are: ");
        for(i=0;i<n;i++);
        printf("\t %d", arr[i]);
        printf("\n The largest of these number is: %d", large);
        printf("\n The second largest of these number is: %d", second_large);

        return 0;

}