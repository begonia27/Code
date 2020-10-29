// 练习第十三题 将数组按照升序排列的程序（使用全局变量）
#include <stdio.h>

int i, j, n, a, temp, upArray, downArray;
int array[16];

void sort(void);
void sortUp(void);
void sortDown(void);

int main(void)
{
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
        44, -3, -9, 12, 17, 22, 6, 11};

    void sort(void);
    printf("The array before the sort:\n");

    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }
    
    sortUp();
    printf("\n\nThe up array after the sort:\n");

    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }
    
    sortDown();
    printf("\n\nThe down array after the sort:\n");

    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }

    printf("\n");
    
    return 0;
}

void sortUp(void)
{
    int a[n];
    upArray = array[i];
    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }         
        }
    }
}

void sortDown(void)
{
    int a[n];
    downArray = array[i];
    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }         
        }
    }
}
