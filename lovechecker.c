//lovechecker by tine
// If else statements
// LIBRARIES
#include <stdio.h> //for printf function
#include <string.h> // Include string.h for strcmp
#include "cs50.h"  // Assuming you have cs50.h for get_string function

int main()
{
    char name [50]; 
    
    //use char to store the name

    printf("\n");
    printf(" Who are you? : \n");
    printf("\n");
    scanf("%49s", name);  //name is already an array and should be passed directly without &
    
    //  %d - integer (+ or - whole number)
    //  %f - floating point value (+ or - number with decimal point)
    //  %c - single character (1 / X / ] / } )
    //  %s - string of characters ("abc123, dog, cat,") *add no. before s to specify how many characters
    //  %lf - double-precision floating point value "BASICALLY HUGE NUMBERS" (-1.797693134862315E+308 to -2.225073858507201E-308)
    
    // 49%s reads string and limits input
   
    if(strcmp(name, "raynne") ==0 || strcmp(name, "Raynne") ==0)
    // use strcmp to compare strings in this case input string (name) and "raynne"
    // ==0 if strings are equal 
    // use || to add extra string comparer as I would like to call it

    {
      printf("\n");
        printf("Hey, My beautiful girlfriend I miss you so much <B  \n");
         printf("\n");
    }
    else
    {
      printf ("\n");
        printf("GET AWAY FROM ME YUCKKK!!! \n");
        printf("\n");
    }    

    return 0;
}

// TERMINAL CODES 
// launch program (./ name)
// make name
// gcc. name.c -o name (changes code from human readable to computer readable)

//RESTUDY DATA TYPES INTERGERS, CHARACTERS THINGIESSS float,int,char
