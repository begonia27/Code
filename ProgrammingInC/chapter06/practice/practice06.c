#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number:");
    scanf("%i", &number);

    switch(number)
    {
        case 0: 
            printf("zero"); 
            break;
        case 1: 
            printf("one"); 
            break;
        case 2: 
            printf("two"); 
            break;
        case 3: 
            printf("there"); 
            break;
        case 4: 
            printf("four"); 
            break;
        case 5: 
            printf("five"); 
            break;
        case 6: 
            printf("six"); 
            break;
        case 7: 
            printf("seven"); 
            break;
        case 8: 
            printf("eight"); 
            break;
        case 9: 
            printf("nine"); 
            break;
        default: 
            printf("Unknown operator.\n");
            break;
    }

    return 0;
}
