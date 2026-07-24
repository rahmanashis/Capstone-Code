#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    FILE *file;

    char name[30];
     int age;

    file = fopen("test.txt", "a");

    if (file == NULL)
    {
        printf("Error! Could not open or create the file.");
        return 1;
    }

    else
    {
        printf("File opened successfully.\n");

        printf("Enter your full name: ");
        gets(name);

        printf(" Enter your age: ");

        scanf("%d",&age);

        fprintf(file, "Name= %s, Age= %d\n", name,age);
    fputs("\n", file);

        printf("\nFile is written successfully.");

        fclose(file);
    }

    getch();
    return 0;
}

