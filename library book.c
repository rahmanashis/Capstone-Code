#include <stdio.h>

int main() {
    FILE *file;
    char title[50], author[30];
    int isbn[10];
    int n, i;

    file = fopen("library.txt", "a");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Book Title: ");
        scanf(" %[^\n]", title);  // reads string with spaces

        printf("Enter Author Name: ");
        scanf(" %[^\n]", author);

        printf("Enter ISBN: ");
        scanf("%d", isbn);

        fprintf(file, "%s\t%s\t%s\n", title, author, isbn);
    }

    fclose(file);
    printf("Book records stored successfully.\n");
    return 0;
}

