#include<stdlib.h>
#include<stdio.h>

void hanoi(int n, int source, int destination, int inter){
    // recursive function

    if(n==1){
    // base case
    //n = the number of discs, source = the source rod and destination, 
    //destination = destination rod, inter = interim rod bewtween the other rods 
        printf("Move disc from %d to %d\n", source, destination);
    // only if we have one disc
    }

    else{
    //recursion
        hanoi(n-1, source, inter, destination);
        //command for how to move discs
        printf("Move disc from %d to %d\n", source, destination);
        // move from rod 2 to 3 using rod 1 as the intermediary. 
        hanoi(n-1, inter, destination, source);
    }

}

int main(void){
    // solve for h discs

    int h=2;
    
    printf("Solution for %d discs\n", h);
    // call the function
    hanoi(h, 1, 2, 3);

    return 0;
}