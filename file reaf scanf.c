#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    FILE *file;

    char fname[30];
    char lname[30];
    file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("Error! Could not open or create the file.");
        return 1;
    }

    else
    {
        printf("File opened successfully.\n");

       fscanf(file,"%s %s",&fname, &lname);

       printf("%S %s\n",fname, lname);

        fclose(file);
    }

    getch();
    return 0;
}



