//simple c program
/*
Name:sharon wangui njoki
Reg:CT100/G/26218/25
Description:program for a loan
*/
#include <stdio.h>

int main() {
    int age;
    int income;
    printf("Enter age");
    scanf("%d",&age);
    printf("Enter income");
    scanf("%d",&income);
    if(age>=21 && income>=21000)
    {
        printf("congratulations you qualify for a loan");
    }
    else
            {
                printf("unfortunately we are unable to offer you a loan at this time");
            }
    return 0;
}