//Program to determine if a number is even or odd

#include <stdio.h>

int main(void)
{
    int number_to_test, remainder;

    //make user input number to test
    printf("Enter yuor number to tested.: ");
    scanf("%i",&number_to_test);

    //calculate the number does it belong to odd or even
    remainder = number_to_test % 2;

    //jugdement the number does it belong to odd or even
    if (remainder == 0)
    {   
        //display the result if the remainder is even
        printf ("The number is even.\n");
    }

    if (remainder != 0)
    {   //display the resulr if the remainder is odd
        printf("The number is odd.\n");
    }

    return 0;
}
