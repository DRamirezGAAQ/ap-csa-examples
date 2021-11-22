#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
  // Ask the user for how much change is owned to them
  // Only accept floats larger than or equal to 0
  float change;

  do{

      change = get_float("Change Owed: ");

  }
  while(change <= 0);
  
  


}
