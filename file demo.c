#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *file;

    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("Error! Could not open or create the file.");
    }
    else
    {

        printf("File opened successfully.");

        fclose(file);
    }

    getch();
    return 0;
}
