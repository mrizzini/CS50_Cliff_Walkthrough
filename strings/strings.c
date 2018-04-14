#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{

// with command line arguments, make sure the user puts in the right amount of inout

    if (argc != 2)
    {
        printf("Usage: strings \"phrase\"\n");
        return 1;
        // OR
        // exit(1);
    }


// use double quotes to make the second argument one argument if it is multiple words

    // printf("%i\n", argc);
    // int length = strlen(argv[1]);
    // printf("%i\t%s\n", length, argv[0]);
    // printf("%i\n", length);

    // use variable for length b/c we don't want strlen running everytime on the loop. store length in here so it gets destroyed
    // after loop ends
    for (int i = 0, length = strlen(argv[1]); i < length; i++)
    {
        // printf("character it pos %i: %c\n", i, argv[1][i]);
        if (argv[1][i] != 32) // checks if ASCII value is 32, which is a space. could do != ' '  instead
        {
            printf("ASCII value at pos %i: %i\n", i, argv[1][i] - 'a'); // prints the alphabetic number for lowercase
        }

    }



}