#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    FILE *file;

    char name[20] = "Ashis Rahman";

    int length = strlen(name);
    int i;

    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("Error! Could not open or create the file.");
        return 1;
    }
    else
    {
        printf("File opened successfully.\n");

        for(i = 0; i < length; i++)
        {
            fputc(name[i], file);
        }

        printf("\nFile was written successfully.");

        fclose(file);
    }

    getch();
    return 0;
}
