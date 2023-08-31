#include <stdio.h>

int read_array(int array[], int n);
int display_array(int array[], int n);
int lowest(int array[], int n);
int highest(int array[], int n);

int main() {
    int array[10];
    int n;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    read_array(array, n);
    display_array(array, n);
    
    int Lowest = lowest(array, n);
    int Highest = highest(array, n);
    
    printf("\n The lowest element in the array is: %d", Lowest);
    printf("\n The highest element in the array is: %d", Highest);

    return 0;
}

int read_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

int display_array(int array[], int n) {
    printf("The entered elements in the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
}

int lowest(int array[10], int n){
    int lowest = array[0];
    
    for(int i=0;i<n;i++){
        if(array[i]<lowest){
            lowest = array[i];
        }
    }
    return lowest;
}

int highest(int array[10], int n){
    int highest = array[0];
    
    for(int i=0;i<n;i++){
        if(array[i]>highest){
            highest = array[i];
        }
    }
    return highest;
}
