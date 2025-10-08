//"simple c program";
/*
Name:sharon wangui njoki
Reg:CT100/G/26218/25
Description:program for a withdrawal of money
*/

#include <stdio.h>

int main() {
    int i=1000;
    int w;
    while (i>=0){
        printf("Enter amount to withdraw\n");
    scanf("%d",&w);
        i=i-w;
        printf("%d\n",i);
    }
    
    
    return 0;
}