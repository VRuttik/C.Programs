// Write a program to calculate the area and circumference of a circle

#include<stdio.h>

int main(){

   float radius;
   double area, circumference;

   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   area = 3.142 * radius * radius;

   circumference = 2 * 3.142 * radius;

   printf("\nArea of the Circle is: %.2le", area);
   printf("\nCircumference of the Circle is: %.2le", circumference);

   return 0;
}
