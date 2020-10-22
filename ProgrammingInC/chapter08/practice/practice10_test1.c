/* 先写一个函数，这个函数接收一个输入的数，然后把这个函数返回出来，在main函数里面里面接收这个值，把这个值存下来 */
#include <stdio.h>

int getNumber(void);

int main(void)
{
    int a, number;

    number = getNumber();
    printf("number is: %i", number);

    return 0;
}

int getNumber(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%i", &number);

    return number;
}