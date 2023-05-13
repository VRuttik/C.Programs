#include<stdio.h>
#include<string.h>

int main(){

    struct student{

        int roll_no;
        char name[80];
        int fees;
        char DOB[80];

    };

    struct student stud[50];

    int n, i, num, new_rollno;;
    int new_fees;
    char new_DOB[80], new_name[80];

    printf("\n Enter the number of student: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("\n Enter the roll no: ");
        scanf("%d", &stud[i].roll_no);
        printf("\n Enter the name: ");
        scanf("%s", stud[i].name);
        printf("\n Enter the fees: ");
        scanf("%d", &stud[i].fees);
        printf("\n Enter the DOB: ");
        scanf("%s", stud[i].DOB);
    }

    for(i=0;i<n;i++){
        
        printf("\n***************Student's Details***************");
        printf("\n Roll no: %d", stud[i].roll_no);
        printf("\n Name: %s", stud[i].name);
        printf("\n Fees: %d", stud[i].fees);
        printf("\n DOB: %s", stud[i].DOB);
    }

    printf("\n Enter the student number whose record has to be edited: ");
    scanf("%d", &num);
    num = num - 1;
    printf("\n Enter the new roll no: ");
    scanf("%d", &new_rollno);
    printf("\n Enter the new name: ");
    scanf("%s", new_name);
    printf("\n Enter the new fees: ");
    scanf("%d", &new_fees);
    printf("\n Enter the new DOB: ");
    scanf("%s", new_DOB);

    stud[num].roll_no = new_rollno;
    strcpy(stud[num].name, new_name);
    stud[num].fees = new_fees;
    strcpy(stud[num].DOB, new_DOB);

    for ( i=0;i<n;i++){
        printf("\n***************Student's Details***************");
        printf("\n Roll no: %d", new_rollno);
        printf("\n Name: %s", new_name);
        printf("\n Fees: %d", new_fees);
        printf("\n DOB: %s", new_DOB);
    }
    

    return 0;
}