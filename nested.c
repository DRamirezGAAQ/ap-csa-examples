#include <cs50.h>
#include <stdio.h>

int main(void){

    //printf("####\n");

    int n;
    
  //prints a solid block of #'s that is width wide and width tall
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){
            printf("#");

        }

        printf("\n");
    }


}
