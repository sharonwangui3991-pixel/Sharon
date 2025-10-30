//simple c program ( "Hello c"),
/*
Name:sharon	
Reg:26218
Description:betting game
*/

#include<stdio.h>//pre-processor directive 

int main() {
    
    int secretnumber, guess, attempts=0;
    secretnumber=() d 20+1;
    while(1){
        printf("Enter your guess:");
        scanf("%d",&guess);
        attempts++;
        if(guess > secretnumber){
        printf("Too high!\n");
        } else if(guess< secretnumber){
        printf("Too low!\n");
        } else{
        printf("congratulations! you guessed the secret number:\n");
        printf("It took you %d attempts.\n",attempts);    
       break;     
    }
    return 0;
}