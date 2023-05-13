// 1. Write a program using structures to read and display the information about a student.

#include<stdio.h>

int main(){

    struct  student
    {
        int roll_no;
        char name[80];
        float fees;
        char DOB[80];

    };
    struct student stud1;

    printf("\n Enter the Roll No: ");
    scanf("%d", &stud1.roll_no);

    printf("\n Enter the name: ");
    scanf("%s", stud1.name);

    printf("\n Enter the fees: ");
    scanf("%d", &stud1.fees);

    printf("\n Enter the DOB: ");
    scanf("%s", &stud1.DOB);

    printf("\n **************Student's Details***************");

    printf("\n Roll No: %d", stud1.roll_no);
    printf("\n Name: %s", stud1.name);
    printf("\n Fess: %d", stud1.fees);
    printf("\n DOB: %s", stud1.DOB);
    
    return 0;
}