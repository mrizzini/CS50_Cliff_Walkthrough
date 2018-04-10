#include <stdio.h>
// #include <

int main(void)
{

    char character = 'l'; // tells C how to interpret the l. using char will tell it that it is a character, not an integer
// single quotes for single characters
// \t is the tab
    printf("%c\n", character); // prints the l
    printf("%i\n", character); // prints the 108, the ACII value of l
    printf("%i\t%c\n", character + 4, character + 4);

    printf("\n");

    char characterOne = 112; //

    printf("%c\n", characterOne); // prints
    printf("%c\n", 97); // prints

    printf("%i\t%i\n", 'r' - 'a', characterOne + 4); // depending on %i or %c you can change what the output is. a char or integer
    printf("%c\t%c\n", 17 + 'a', characterOne + 4);


    printf("%lu\t%lu\n", sizeof(int), sizeof(char));
    // char is treated as an integer. it is smaller to store. it is a small integer essentially.

}