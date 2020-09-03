// Program to convert a positive integer to another base

#include <stdio.h>

int main (void)
{   
    //保存转换后数值每一位上所有可能的16个数字，当数字是10-15时，会被转换为A-F,const的作用是保持变量的值不变
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    //第一个声明是指在计算机上可以容纳最大的long整数转化为最小的基数（2）后的结果
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    // get the number and the base
    //询问用户需要将哪个正整数转换为其他基数（输入正整数）
    printf("Number to be converted? ");
    scanf("%ld", &numberToConvert);

    //询问用户需要将哪个正整数转换为其他基数（输入基数）
    printf("Base? ");
    scanf("%i", &base);

    // convert to the indicated base
    //即使用户输入0，我们也要最少输出一位数字，因此使用了do-while语句
    do
    {   //计算转换了基数后的convertedNumber[index]值是什么
        convertedNumber[index] = numberToConvert % base;
        ++index;//数组的下标，保存着转换之后保存的数字的个数
        numberToConvert = numberToConvert / base;
    } while (numberToConvert != 0);

    // display the results in reverse order
    printf("Converted number = ");

    //这个for循环是为了正序显示convertedNumber[index]的每一位值
    //初始表达式--index和循环表达式--index为什么要用自减操作符？因为前面的do-while语句给index增加了1，因此要减去1
    for (--index; index >= 0; --index)
    {
        //为了将数字10-15正确显示为A-F
        nextDigit = convertedNumber[index];

        //注意！baseDigits[nextDigit]的类型是常量、字符型
        //baseDigits[nextDigit])也可以不使用nextDigit，直接写成baseDigits[convertedNumber[index]]
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");

    return 0;
}
