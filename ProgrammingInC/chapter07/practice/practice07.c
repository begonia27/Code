#include <stdio.h>

int main (void)
{
    int i, j, p[150] = {0};

    for (i = 2; i < 150; ++i)
    {    
        if (p[i] == 0)//代表i是质数
        {   
            printf("%i ", i);

            for (j = 2; i * j < 150; ++j)
            {
                p[j * i] = 1;//代表i不是质数
            }            
        }    
    }

    return 0;
}
