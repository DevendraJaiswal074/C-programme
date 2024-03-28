// Create a program to assign the value of one variable to another.

// Create an integer variable named distance with value 135.
// Print the distance variable.
// Create another integer variable named newDistance with value 429.
// Assign the newDistance variable to the distance variable.
// Print the distance variable again in a separate line.


#include <stdio.h>

int main() {

    // create and print the distance variable
    int distance = 135;
    printf("%d\n",distance);

    // create the newDistance variable
    int newDistance = 429;
    // assign newDistance to distance and print distance in a separate line
    distance= newDistance;
    printf("%d",distance);

    return 0;
}