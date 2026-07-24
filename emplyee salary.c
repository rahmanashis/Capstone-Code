#include <stdio.h>

int main() {
    FILE *file;
    char name[30];
    int id, i, n;
    float salary;

    file = fopen("employees.txt", "a");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter number of employees to store: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter Employee Name: ");
        scanf("%s", name);

        printf("Enter Employee ID: ");
        scanf("%d", &id);

        printf("Enter Salary: ");
        scanf("%f", &salary);

        fprintf(file, "%s\t%d\t%.2f\n", name, id, salary);
    }

    fclose(file);
    printf("Employee records saved successfully.\n");
    return 0;
}

