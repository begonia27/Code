#include <stdio.h>
#define ROW 3
#define COLUMN 5

int main(void)
{
    //scalar表示用于和二维数组的每一个元素相乘的固定的常数
    void scalarMutiply(int matrix[ROW][COLUMN], int scalar);
    void displayMatrix(int matrix[ROW][COLUMN]);

    //首先定义了矩阵
    int sampleMatrix[ROW][COLUMN] = 
    {
        {7, 16, 55, 13, 12},
        {12, 10, 52, 0, 7},
        {-2, 1, 2, 4, 9}
    };

    printf("Original matrix:\n");

    //使用函数将矩阵显示出来
    displayMatrix(sampleMatrix);

    //第一次调用函数scalarMutiply的时候，让整个矩阵乘以2
    scalarMutiply(sampleMatrix, 2);

    //matrix[row][colomn]函数执行完成之后，重新调用displayMaxtrix函数，显示数组sampleMatrix的内容
    printf("\nMutiplied by 2:\n");
    displayMatrix(sampleMatrix);

    //第二次调用函数scalarMutiply的时候，让整个矩阵乘以-1
    scalarMutiply(sampleMatrix, -1);

    //matrix[row][colomn]函数执行完成之后，重新调用displayMaxtrix函数，显示数组sampleMatrix的内容
    printf("\nThen mutiplied by -1:\n");
    displayMatrix(sampleMatrix);

    return 0;
}

//根据标号计算3 * 5的数组的函数
void scalarMutiply(int matrix[ROW][COLUMN], int scalar)
{
    int row = ROW, column = COLUMN;

    //外层循环用于遍历二维数组的每一行，一共3行
    for (row = 0; row < ROW; ++row)
    {

        //内层循环用于遍历其每一列上的元素，一共5列
        for (column = 0; column < COLUMN; ++column)
        {
            //计算所得的结果重新保存在matrix[row][column]中
            matrix[row][column] *= scalar;
            /*该函数执行完成之后，程序的流程返回到main函数中，
            随后重新调用displayMaxtrix函数，显示数组sampleMatrix的内容*/
        }
    }
}

//用于显示计算所得函数值
void displayMatrix(int matrix[ROW][COLUMN])
{
    int row = ROW, column = COLUMN;

    for (row = 0; row < ROW; ++row)
    {
        for (column = 0; column < COLUMN; ++column)
        {
            //使用格式化字符串确保所有输出的矩阵元素都是对齐的
            printf("%5i", matrix[row][column]);
        }

        //在每一行的元素输出之后换行显示下一行的元素
        printf("\n");
    }
}
