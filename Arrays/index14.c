// Write a program to read an array of n numbers and then find the smallest number.

#include <stdio.h>
#include <math.h>

void read_array(int arr[], int n);
int find_small(int arr[], int n);
int main()
{

    int num[10], n, small;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    read_array(num, n);
    small = find_small(num, n);

    printf("\n The smallest number in the array is: %d", small);
}

void read_array(int arr[10], int n)
{

    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int find_small(int arr[10], int n)
{

    int i, small=arr[0];
    for ( i = 1; i < n; i++)
    {
        if(small>arr[i])
        small=arr[i];
    }

    return small;
    
}