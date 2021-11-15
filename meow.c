//Let's write a program that will print "meow" to the screen three times

#include <cs50.h>
#include <stdio.h>

//function prototype needed to let C know we have defined a function at the bottom of our program
void meow(void);

int main(void){
    
  //function call
    meow();

    printf("bark!\n");

}

//function definition for meow()
void meow(void){

    for(int i = 0; i < 3; i++){

        printf("meow\n");

    }
}
