/**
 * test
 * @author Clay
 * @date 2021/3/18
 */

#include <stdio.h>
#include <stdbool.h>

/**
 *
 * @param source 源字符串
 * @param target 目标字符串
 * @return
 */
int findStr(char source[], char target[])
{
    // 目标字符串长度
    unsigned int targetLength = 0;

    // 先算出长度，避免循环中每次都要判断
    for (unsigned int i = 0; target[i] != '\0'; ++i)
    {
        ++targetLength;
    }

    // 从源字符串第一个字母开始循环
    for (unsigned int i = 0; source[i] != '\0'; ++i)
    {
        // 先假定当前索引 (i) 开始的字符串满足条件
        bool equal = true;

        // 开始循环目标字符串，有一个不相同即改为 false ，然后跳出循环从源字符串下一个字母继续
        for (unsigned int j = 0; j < targetLength/* 函数开头已经计算过目标字符串长度，这里不用每次判断 */; ++j)
        {
            if (source[i + j]/* 这里源字符串要用 i + j ，因为是从相对于 i 的位置开始循环的，这里 i 叫基址， j 叫偏移量 */
                != target[j]/* 目标字符串直接用 j ，也可以理解为目标字符串的基址为 0 */)
            {
                // 不相等就意味着 i 肯定不对了，这里首先把 equal 改为 false
                equal = false;

                // 这里可以做一个优化，因为后面再比较也没有意义，所以可以直接 break 进行下一轮外循环
                // 不跳出也不会有任何影响，只是多跑了一些没有意义的语句
                // break;
            }
        }

        // 如果 equal 仍然为 true ，那么说明本次内循环中没有遇到不同的字符
        if (equal)
        {
            // 也就是说， i 就是我们要找的索引
            return i;
        }
            // 如果为 false ，说明还要继续找，但是不能返回-1，这会导致第一轮匹配失败就直接返回-1
        else
        {
            // 这里要么什么都不写，要么写 continue ，总之不能 return 。这整个 else 都可以不要
            // continue 没有意义，因为这个循环后面没有语句了，写不写都要进行下一轮循环了
            // continue;
        }

        // 循环结束后，需要把 equal 的值重置为 true ，用于下一轮循环。
        // 这里能发现，刚好在循环的开头有一个 equal = true ，所以这里可以省略。
    }

    // 只有到了这里，说明所有的子串都不匹配，才能确认找不到，所以可以 return 。
    // 因为只要有匹配的的子串，就会在上面的 if (equal) 中 return 了，不会走到这里来。
    return -1;
}

int main()
{
    int findStr(char source[], char target[]);

    int i = 0;
    int startPoint = 0;

    const char source[] = "a chatterbox";
    const char target[] = "hat";

    startPoint = findStr("a chatterbox", "hat");

    printf("%i\n", startPoint);

    return 0;
}
