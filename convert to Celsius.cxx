//Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:personal details
*/
#include <stdio.h>
int main();

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(f));
    return 0;
}