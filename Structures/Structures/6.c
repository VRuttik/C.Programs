// 6. Write a program to initialize the memebers of a structure by using a pointer to the structure.

#include<stdio.h>

struct student {
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

int main(){
struct student stud1, *ptr_stud1;

ptr_stud1 = &stud1;
printf("\n Enter the details of the student: ");
printf("\n Enter the Roll No: ");
scanf("%d", &ptr_stud1->r_no);
printf("\n Enter the Name: ");
scanf("%s", ptr_stud1->name);
printf("\n Enter the Course: ");
scanf("%s", ptr_stud1->course);
printf("\n Enter the Fees: ");
scanf("%d", &ptr_stud1->fees);

printf("\n **********Details of the student**********");
printf("\n Roll No: %d", ptr_stud1->r_no);
printf("\n Name: %s", ptr_stud1->name);
printf("\n Course: %s", ptr_stud1->course);
printf("\n Fees: %d", ptr_stud1->fees);

return 0;
}