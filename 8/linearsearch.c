// ===========================
// compile on the command line with
// gcc -g linearsearch.c -o linearsearch
// ===========================
#include <stdio.h>

int main(){
    // Create an array
    // An array is a contiguous collection of variables.
    // It can be convenient to create an array, versus making
    // many variables.
    int myFavoriteNumbers[3];
    // The first item in an array starts at '0'
    myFavoriteNumbers[0] = 500; // How old I am! :) 
    myFavoriteNumbers[1] = 7;   // A lucky number
    myFavoriteNumbers[2] = 13;  // An unlucky number

    // Search through each item to see if 100 is found
    int index = 0;
    for(index =0; index < 3; index = index + 1){
        if(myFavoriteNumbers[index] == 100){
            printf("100 is a favorite number!\n");
        }else{ 
            // Note: We can have two placeholders for variables in our
            //       printf statements.
            printf("Did not find 100 on %d try, but found %d instead\n",index,myFavoriteNumbers[index]);
        }
    }

    return 0;
}
