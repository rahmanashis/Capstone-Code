#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20];
    int age, phoneNumber, num, i;

    file = fopen("student.txt", "a");

    if(file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter number of students : ");
        scanf("%d", &num);

        for(i = 1; i <= num; i++)
        {
            printf("Enter student Name : ");
            scanf("%s", &name);

            printf("Enter student Age : ");
            scanf("%d", &age);

            printf("Enter student Phone number : ");
            scanf("%d", &phoneNumber);

            fprintf(file, "\n%s\t\t%d\t\t%d\n", name, age, phoneNumber);
        }

        fclose(file);
    }

    getch();
    return 0;
}

