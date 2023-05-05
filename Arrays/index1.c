// Write a program to calculate the area of a circle.

#include<stdio.h>

int main(){

    float radius;
    double area;
    
    printf("\n Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.142*radius*radius;

    printf("The area of circle is: %.2lf", area);

    return 0;
}