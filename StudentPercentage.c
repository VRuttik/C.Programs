#include <stdio.h>

int main() {
    const char *subjects[] = {"Marathi", "English", "Hindi", "Science", "Math"};
    int numSubjects = sizeof(subjects) / sizeof(subjects[0]);
    int numStudents = 5;
    
    // Initialize arrays to store student marks and percentages
    int marks[numStudents][numSubjects];
    double percentages[numStudents];
    
    // Input marks for each student
    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < numSubjects; j++) {
            printf("%s: ", subjects[j]);
            scanf("%d", &marks[i][j]);
        }
    }
    
    // Calculate percentages for each student
    for (int i = 0; i < numStudents; i++) {
        int totalMarks = 0;
        for (int j = 0; j < numSubjects; j++) {
            totalMarks += marks[i][j];
        }
        percentages[i] = (double) totalMarks / (numSubjects * 100) * 100;
    }
    
    // Print percentages for each student
    printf("\nStudent-wise Percentages:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %.2f%%\n", i + 1, percentages[i]);
    }
    
    return 0;
}
