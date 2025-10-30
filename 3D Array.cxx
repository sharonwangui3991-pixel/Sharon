//Simple c program
/*
Name: Sharon wangui Njoki	
Reg: CT100/G/26218/25
Description:personal details
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int hotel[3][5][10];  // 3 branches, 5 floors each, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0;

    // Initialize random number generator
    srand(time(0));

    // Assign random occupancy (1 = occupied, 0 = vacant)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                hotel[branch][floor][room] = rand() % 2;
            }
        }
    }

    // Calculate and display occupancy for each branch
    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        printf("\nBranch %d:\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;
            for (room = 0; room < 10; room++) {
                if (hotel[branch][floor][room] == 1) {
                    floorOccupied++;
                    totalOccupied++;
                }
            }
            branchOccupied += floorOccupied;
            printf("  Floor %d -> %d rooms occupied\n", floor + 1, floorOccupied);
        }

        printf("Total occupied rooms in Branch %d: %d\n", branch + 1, branchOccupied);
    }

    printf("\nOverall total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}