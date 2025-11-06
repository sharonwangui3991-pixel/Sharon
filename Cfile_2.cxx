//Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:University students binary results
*/
#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fread(&s, sizeof(s), 1, file)) {
        printf("Name: %s, RegNo: %d, Marks: %.2f\n", s.name, s.regNo, s.marks);
    }

    fclose(file);
    return 0;
}