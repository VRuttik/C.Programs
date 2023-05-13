// 7. Write a program, using an array of pointer to a structure, to a read and display the data of students.

#include<stdio.h>
#include<malloc.h>
    struct student{
        int roll_no;
        char name[20];
        char course[20];
        int fees;
    };

    struct student *ptr_stud[10];

    int main(){

        int n, i;
        printf("\n Enter the number of student: ");
        scanf("%d", &n);
        for (i=0;i<n;i++)
        {
            ptr_stud[i] = (struct student *)malloc(sizeof(struct student));
            printf("\n Enter the data for %d: ", i+1);
            printf("\n Roll No: ");
            scanf("%d", &ptr_stud[i]->roll_no);
            printf("\n Enter the name: ");
            scanf("%s", ptr_stud[i]->name);
            printf("\n Enter the course: ");
            scanf("%s", ptr_stud[i]->course);
            printf("\n Enter the fees: ");
            scanf("%d", &ptr_stud[i]->fees);
        }
            printf("\n *****Deatils Of the Student*****");
            for(i=0;i<n;i++){
            printf("\n Roll no: %d", ptr_stud[i]->roll_no);
            printf("\n Name: %s", ptr_stud[i]->name);
            printf("\n Course: %s", ptr_stud[i]->course);
            printf("\n Fees: %d", ptr_stud[i]->fees);
            }

            return 0;
    }

