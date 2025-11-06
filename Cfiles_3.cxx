//Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;
    int n, i;

    file = fopen("sales.txt", "a"); 
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    printf("How many transactions do you want to enter? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount); 
    }

    fclose(file); 

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt for reading\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("\nTotal sales for the day: %.2f\n", total);

    return 0;
}
