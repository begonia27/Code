// 练习第十二题（使用全局变量）
#include <stdio.h>

int n = 0;
int m = 0;
int i, j;

void transposeMatrix(int array[][5], int n, int m);

int main(void)
{ 
    int a[4][5] = 
    {
        {0, 1, 2, 3, 4}, 
        {0, 1, 2, 3, 4}, 
        {0, 1, 2, 3, 4}, 
        {0, 1, 2, 3, 4},
    };

    transposeMatrix(a, 4, 5);

    return 0;
}

void transposeMatrix(int array[][5], int n, int m)
{
    int reverse[5][4];

    printf("The original matrix is\n");

    for (i = 0; i < n; ++i)
    {   
        for (j = 0; j < m; ++j)
        {
            printf("%i ", array[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    printf("The reverse matrix is\n");

    for (i = 0; i < m; ++i)
    {   
        for (j = 0; j < n; ++j)
        {
            reverse[j][i] = array[j][i];

            printf("%i ", reverse[j][i]);
        }

        printf("\n");
    }
}
