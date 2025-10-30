//Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:1
*/
#include <stdio.h>   
//pre-processor descriptive.scanf

//main fuction
int main(){
    float revenue[7];
    float total =0,average;
    int i;
    
    printf("===weekly revenue Tracker ===\n");
    // Input revenue for each day
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    // Calculate average daily revenue
    average = total / 7;

    // Display results
    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
    }