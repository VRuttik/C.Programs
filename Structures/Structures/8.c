//8. Write a program that passes a pointer to a structure to a function.

#include<stdio.h>
#include<malloc.h>

struct student{
    int roll_no;
    char name[20];
    char course[20];
    int fess;
};

void display(struct student *);

int main(){

    struct student *ptr;
    ptr=(struct student *)malloc(sizeof(struct student));
    printf("\n Enter the data for the student: ");
    printf("\n Roll no: ");
    scanf("%d", &ptr->roll_no);
    printf("\n Name: ");
    scanf("%s", ptr->name);
    printf("\n Course: ");
    scanf("%s", ptr->course);
    printf("\n Fees: ");
    scanf("%d", &ptr->fess);

    display(ptr);
    
    return 0;
}

void display(struct student *ptr){
    printf("*****Details Of Student*****");
    printf("\n Roll no: %d", ptr->roll_no);
    printf("\n Name: %s", ptr->name);
    printf("\n Course: %s", ptr->course);
    printf("\n Fees: %d", ptr->fess);
}