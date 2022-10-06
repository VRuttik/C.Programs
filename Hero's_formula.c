#include<stdio.h>

int main(){

   float a, b, c, area, S;

   printf("Enter the lengths of the three sides of the triangle: ");
   scanf("%f %f %f", &a, &b, &c);

   S = (a + b + c)/2;

   area = sqrt(S*(S-a)*(S-a)*(S-c));

   printf("\n Area = %f", area);

   return 0;
}
