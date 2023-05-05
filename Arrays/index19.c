/* Write a program to read a 2d array marks which stores the marks of five students in three subjects.
Write a program to display the highest marks in each subject.
*/

#include<stdio.h>

int main(){

    int marks[5][3], i, j, max_marks;

    printf("Enter the data\n");
    printf("*****************\n");

    for(i=0;i<5;i++){
        printf("Enter the marks obtained by the student %d: \n", i+1);
        for(j=0;j<3;j++){
        printf("marks[%d][%d] = ", i, j);
        scanf("%d",&marks[i][j]);
        }
    }
    for(j=0;j<3;j++){

        max_marks = -999;
        for(i=0;i<5;i++){

            if(marks[i][j]>max_marks)
            max_marks = marks[i][j];
        }
        printf("\n The highest marks in the subject %d is: %d", j+1, max_marks);
    }

}