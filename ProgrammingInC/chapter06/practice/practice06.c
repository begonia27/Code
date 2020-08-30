#include <stdio.h>
#include <math.h>

int main(void)
{
    int result, number, temp, count = 0;
    printf("Enter a number:");
    scanf("%i", &number);

    temp = number;

    //计算一个数有几位
    while (number != 0)
    {
        number /= 10;
        ++count;
    }

    //计算每一位分别是什么
    while (temp != 0)
    {
        result = temp / (int) (pow(10,count - 1));
        temp = temp % (int) (pow(10,count - 1));
        --count;

        switch (result)
        {
            case 0:
            {
                printf("zero ", 0);
                break;
            }
            case 1:
            {
                printf("one ", 1);
                break;
            }
            case 2:
            {
                printf("two ", 2);
                break;
            }
            case 3:
            {
                printf("three ", 3);
                break;
            }
            case 4:
            {
                printf("four ", 4);
                break;
            }
            case 5:
            {
                printf("five ", 5);
                break;
            }
            case 6:
            {
                printf("six ", 6);
                break;
            }
            case 7:
            {
                printf("seven ", 7);
                break;
            }
            case 8:
            {
                printf("eight ", 8);
                break;
            }
            case 9:
            {
                printf("nine ", 9);
                break;
            }
        }
    }

    return 0;
}
