#include<stdio.h>

int main(){

   int num1, num2;
   int addition, multiplication, subtraction, integer_division, modulo_division;

   printf("Enter the first Number: ");
   scanf("%d", &num1);

   printf("Enter the second Number: ");
   scanf("%d", &num2);

   addition = num1 + num2;
   subtraction = num1 - num2;
   multiplication = num1 * num2;
   integer_division = num1 / num2;
   modulo_division = num1 % num2;


   printf("\n%d + %d = %d", num1, num2, addition);
   printf("\n%d - %d = %d", num1, num2, subtraction);
   printf("\n%d * %d = %d", num1, num2, multiplication);
   printf("\n%d / %d = %d", num1, num2, integer_division);
   printf("\n%d % %d = %d", num1, num2, modulo_division);

   return 0;
}
