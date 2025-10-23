////Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:personal details
*/
#include <stdio.h>  

int main();

float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = (100 * 10) + (units - 100) * 15;
    else
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;

    return bill;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}