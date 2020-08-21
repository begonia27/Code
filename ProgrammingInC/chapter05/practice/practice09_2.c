// Program to generate a table of triangular numbers

#include <stdio.h>

int main(void)
{
    int n = 1, triangularNumber = 0;

    printf("TABLE OF TRIANGULAR NUMBER\n\n");
    printf(" n    Sum from 1 to n\n");
    printf("---   ---------------\n");

    while (n <= 10)
    {
        triangularNumber += n;
    
        printf("%2i           %i\n",n,triangularNumber);

        ++n;
    }

    return 0;
}
