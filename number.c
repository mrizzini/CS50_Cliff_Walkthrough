#include <stdio.h>
#include <math.h>

// int stuff(void)
// {
//     printf("Hello\n");
//     return 1;
// }

int main(void)
{
    // stuff();
    printf("Hello there\n");
    int integer = 5 + 8;
    // 000101 + 001000 = 001101
    printf("This is my number: %i\n", integer);
    float flt = 5.3 + 4.83; // a real number. a decimal
    printf("This is my float: %.20f\n", flt);
}

// C is strongly typed but weakly enforced. Strongly typed is defined when compiled. Weak is defined at run time or interpreted
//