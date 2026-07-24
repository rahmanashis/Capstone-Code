#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    FILE *file;

    char ch[30];

    file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("Error! Could not open or create the file.");
        return 1;
    }

    else
    {
        printf("File opened successfully.\n");

        while(!feof(file))
         {
             fgets(ch,27,file);
             printf("%S\n",ch);
         }
        fclose(file);
    }

    getch();
    return 0;
}


