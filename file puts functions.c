#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    FILE *file;

    char name[30];


    file = fopen("test.txt", "a");

    if (file == NULL)
    {
        printf("Error! Could not open or create the file.");
        return 1;
    }

    else
    {
        printf("File opened successfully.\n");
        printf("Enter your full name");
        gets(name);


        fputs(name, file);
        fputs("\n", file);

        printf("\nFile is written successfully.");

        fclose(file);
    }

    getch();
    return 0;
}

