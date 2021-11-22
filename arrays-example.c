#include <cs50.h>
#include <stdio.h>

int main(void){
    // Create an array of size 3
    int nums[3];
    
    // Iterate over the array and place an integer into each index
    for(int i = 0; i < 3; i++){
        nums[i] = get_int("Enter a number: ");
    }
    
    // Calculate the average of all ints in the array
    int average = (nums[0] + nums[1] + nums[2]) / 3;

    printf("%i\n", average);

}
