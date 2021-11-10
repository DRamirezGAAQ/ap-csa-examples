#include <stdio.h>
#include <cs50.h>

int main(void){
    //Use this value to control our for loop later on
    int numValues = get_int("How many values will you enter? ");
    
    //Initialize total to 0, as nothing has been added yet
    int total = 0;
    
    //Create a for loop that will allow the user to
    //Enter numValues amount of numbers to be added
    for(int i = 0; i < numValues; i++){

        int value = get_int("Enter a value: ");

        total += value;
        
    }
    
    //Calculate the average from among the set of user entered numbers
    float average = (float)total / (float)numValues;
    
    printf("Average: %f", average);

}
