  //Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:personal details
*/
#include <stdio.h>   
//pre-processor descriptive.scanf

//main fuction
int main(){
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];  // 5 floors × 10 rooms each
    int floor, room;
    int occupied, vacant;

    srand(time(0));  // Initialize random number generator

    printf("===2D Array: Room Occupancy (One Branch) ===\n\n");

    // Fill array with random occupancy (1 = occupied, 0 = vacant)
    for(floor = 0; floor < 5; floor++) {
        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;  // Random 0 or 1
        }
    }

    // Display occupancy results
    for(floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for(room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d rooms, Vacant: %d rooms\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}