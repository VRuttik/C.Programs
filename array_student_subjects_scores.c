#include <stdio.h>

void input(int students, int subjects, char names[][50], int scores[][5]);
void display(int students, int subjects, char names[][50], int scores[][5]);

int main() {

    int students, subjects;

    printf("Enter the number of students: ");
    scanf("%d", &students);
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    char names[students][50];
    int scores[students][5];

    input(students, subjects, names, scores);
    display(students, subjects, names, scores);

    return 0;
}

void input(int students, int subjects, char names[][50], int scores[][5]) {

    for (int i = 0; i < students; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        
        for (int j = 0; j < subjects; j++) {
            printf("Enter score for subject %d for student %d: ", j + 1, i + 1);
            scanf("%d", &scores[i][j]);
        }
    }
}

void display(int students, int subjects, char names[][50], int scores[][5]) {

    printf("***** Student Information *****\n\n");

    for (int i = 0; i < students; i++) {
        printf("Name: %s\n", names[i]);

        printf("Scores: ");
        for (int j = 0; j < subjects; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n\n");
    }
}
