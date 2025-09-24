//"simple c program";
/*
Name:sharon wangui njoki
Reg:CT100/G/26218/25
Description:program for a loan
*/
#include <stdio.h>

int main() {
    double radius;
    double height;
    double pi=3.14;
    printf("enter radius");
    scanf("%lf",&radius);
    
    printf("enter height");
    scanf("%lf",&height);
    double volume=pi*radius*radius*height;
    double surfacearea=2*pi*radius*radius+2*pi*radius*height;
    printf("%lf\n",volume);
    printf("%lf",surfacearea);
    return 0;
}