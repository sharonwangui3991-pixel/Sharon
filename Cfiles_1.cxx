//Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:storage of books
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt","a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title);  
    fclose(file);

    printf("Book title successfully stored.\n");
    return 0;
}