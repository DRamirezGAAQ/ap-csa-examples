#include <stdio.h>
#include <cs50.h>

int main(void){
  
    int pebbles = 0;
    
    //An example of a cumulative algorithm
    for(int i = 0; i < 5; i++){
        int pile = get_int("How many pebbles in this pile? ");

        //pebbles = pebbles + pile
        pebbles += pile;

    }

    printf("Total pebbles: %i", pebbles);

}
