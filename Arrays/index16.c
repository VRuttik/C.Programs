// Modifies the content of an array using a pointer to an array.

#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5};

    int *ptr, i;
    ptr=&arr[2];
    *ptr=-1;
    *(ptr+1)=1;
    *(ptr-1)=0;

    printf("\n Array is: ");
    for(i=0;i<5;i++)
    printf("\t%d", *(arr+i));

    return 0;
}