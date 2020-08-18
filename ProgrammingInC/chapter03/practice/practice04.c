/*This program minus two integer values and displays the results*/

#include <stdio.h>

int main(void)
{
    //Declare variables
    int value1, value2, difference;

    //Assign values and calculate their minus
    value1 = 87;
    value2 = 15;
    difference = value1 - value2;
    
    //Display the result
    printf("the difference of %i and %i is %i.\n",value1, value2, difference);

    return 0;
}
