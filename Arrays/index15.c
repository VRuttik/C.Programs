// Write a program to interchange the largest and the smallest number in an array.

#include <stdio.h>
#include <math.h>

void read_array(int array[], int n);
void display_array(int array[], int n);
void interchange(int arr[], int n);

int find_biggest_pos(int array[10], int n);
int find_smallest_pos(int array[10], int n);

int main()
{

    int arr[10], n;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    read_array(arr, n);
    interchange(arr, n);
    printf("\n The new array is: ");
    display_array(arr, n);
    return 0;
}

void read_array(int array[10], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("\n arr[%d]= ", i);
        scanf("%d",&array[i]);
    }
}

void display_array(int array[10], int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("\n arr[%d]= %d", i,array[i]);
}

void interchange(int array[10], int n)
{
    int temp, big_pos, small_pos;
    big_pos=find_biggest_pos(array, n);
    small_pos=find_smallest_pos(array, n);
    temp=array[big_pos];
    array[big_pos]=array[small_pos];
    array[small_pos]=temp;
}

int find_biggest_pos(int array[10], int n)
{
    int i, large=array[0], pos=0;
    for(i=1;i<n;i++){
        if(large>array[i])
        large=array[i];
        pos=i;
    }
    return pos;
}

int find_smallest_pos(int array[10], int n)
{
    int i, small=array[10], pos=0;
    for(i=1;i<n;i++){
        if(small>array[i])
        small=array[i];
        pos=i;
    }
    return pos;
}