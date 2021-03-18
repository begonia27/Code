// 合并字符数组的函数
#include <stdio.h>

// 定义了一个无返回值的函数，函数接收三个参数，分别是字符数组、常量字符数组1、常量字符数组2
void concat (char result[], const char str1[], int n1,
    const char str2[], int n2)
{
    // concat函数内部定义了两个变量，使用循环将两个字符数组分别显示出来
    int i, j;

    // 复制str1到result
    for (i = 0; i < n1; ++i)
    {
        result[i] = str1[i];
    }

    // 复制str2到result
    for (j = 0; j < n2; ++j)
    {
        result[n1 + j] = str2[j];
    }
}

int main(void)
{
    // 声明了一个concat函数
    void concat(char result[], const char str1[], int n1,
        const char str2[], int n2);

    // 对函数内接收的两个参数进行声明并初始化，对另一个接收的参数进行声明
    // 对于单个字符，要用单引号来包围，切忌使用双引号，双引号是在字符串中使用的
    const char s1[5] = {'T', 'e', 's', 't', ' '};
    const char s2[6] = {'W', 'o', 'r', 'k', 's', '.'};
    char s3[11];
    int i;

    // 调用函数，写入实参
    concat(s3, s1, 5, s2, 6);

    // 使用循环将字符数组显示出来
    for (i = 0; i < 11; ++i)
    {
        // 输出一个字符char类型的字符数组
        printf("%c", s3[i]);
    }

    // (为什么不在第44行输出的结尾加换行：因为这样会使得输出的每一个字符都纵列显示)
    printf("\n");

    return 0;
}
