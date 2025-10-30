//Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:calculation of fare
*/
#include <stdio.h>
int main();
float calculateFare(float distance) {
    return distance * 50;
}

int main() {;
    float distance;
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}