#include <stdio.h>

int main() {
    FILE *file;
    char name[30];
    int roll, sub1, sub2, sub3, i, n;
    float avg;

    file = fopen("grades.txt", "w");

    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
        printf("Enter marks in 3 subjects: ");
        scanf("%d %d %d", &sub1, &sub2, &sub3);

        avg = (sub1 + sub2 + sub3) / 3.0;

        fprintf(file, "%s\t%d\t%d\t%d\t%d\t%.2f\n", name, roll, sub1, sub2, sub3, avg);
    }

    fclose(file);
    printf("Student grade records saved.\n");
    return 0;
}

