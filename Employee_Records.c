#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[100];
    int id;
    double salary;
    char jobName[100];
};

struct Employee employees[100];
int employeeCount = 0;

void addEmployee() {
    printf("Enter employee name: ");
    scanf("%s", employees[employeeCount].name);
    printf("Enter employee ID: ");
    scanf("%d", &employees[employeeCount].id);
    printf("Enter employee salary: ");
    scanf("%lf", &employees[employeeCount].salary);
    printf("Enter employee job name: ");
    scanf("%s", employees[employeeCount].jobName);
    
    employeeCount++;
    printf("Employee added successfully.\n");
}

void deleteEmployee() {
    int id;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);
    
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < employeeCount - 1; j++) {
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            printf("Employee deleted successfully.\n");
            return;
        }
    }
    
    printf("Employee with ID %d not found.\n", id);
}

void modifyEmployee() {
    int id;
    printf("Enter employee ID to modify: ");
    scanf("%d", &id);
    
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            printf("Enter new employee name: ");
            scanf("%s", employees[i].name);
            printf("Enter new employee salary: ");
            scanf("%lf", &employees[i].salary);
            printf("Enter new employee job name: ");
            scanf("%s", employees[i].jobName);
            
            printf("Employee modified successfully.\n");
            return;
        }
    }
    
    printf("Employee with ID %d not found.\n", id);
}

void displayEmployees() {
    if (employeeCount == 0) {
        printf("No employees found.\n");
    } else {
        printf("Employee details:\n");
        for (int i = 0; i < employeeCount; i++) {
            printf("Name: %s\n", employees[i].name);
            printf("ID: %d\n", employees[i].id);
            printf("Salary: %.2lf\n", employees[i].salary);
            printf("Job Name: %s\n", employees[i].jobName);
            printf("-------------\n");
        }
    }
}

int main() {
    while (1) {
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Modify Employee\n");
        printf("4. Display Employees\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                deleteEmployee();
                break;
            case 3:
                modifyEmployee();
                break;
            case 4:
                displayEmployees();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    
    return 0;
}
