#include <stdio.h>

int add(int*, int*);
int sub(int*, int*);
int mul(int*, int*);
int divi(int*, int*);

int main() {
    int addition, subtraction, multiplication, division;
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    addition = add(&num1, &num2);
    subtraction = sub(&num1, &num2);
    multiplication = mul(&num1, &num2);
    division = divi(&num1, &num2);

    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);

    return 0;
}

int add(int *n1, int *n2) {
    return *n1 + *n2;
}

int sub(int *n1, int *n2) {
    return *n1 - *n2;
}

int mul(int *n1, int *n2) {
    return *n1 * *n2;
}

int divi(int *n1, int *n2) {
    return *n1 / *n2;
}
#include <stdio.h>

int add(int*, int*);
int sub(int*, int*);
int mul(int*, int*);
int divi(int*, int*);

int main() {
    int addition, subtraction, multiplication, division;
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    addition = add(&num1, &num2);
    subtraction = sub(&num1, &num2);
    multiplication = mul(&num1, &num2);
    division = divi(&num1, &num2);

    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);

    return 0;
}

int add(int *n1, int *n2) {
    return *n1 + *n2;
}

int sub(int *n1, int *n2) {
    return *n1 - *n2;
}

int mul(int *n1, int *n2) {
    return *n1 * *n2;
}

int divi(int *n1, int *n2) {
    return *n1 / *n2;
}
