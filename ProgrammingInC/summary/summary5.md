# 第5章 循环

* [1.1 for语句循环](#11-for语句循环)

  * [1.1.1 关系操作符](#121-关系操作符)

  * [1.1.2 对齐输出](#122-对齐输出)

  * [1.1.3 程序输入](#123-程序输入)

  * [1.1.4 嵌套的for循环](#124-嵌套的for循环)

  * [1.1.5 for循环的变体](#125-for循环的变体)

---

* [1.2 while语句](#12-while语句)

---

* [1.3 do语句](#13-do语句)

  * [1.3.1 break语句](#131-break语句)

  * [1.3.2 continue语句](#132-continue语句)

---

## 1.1 for语句循环

1. >一般来说，摆出有 *$n$* 行的 **三角形所需要的点数** 是从 *$1$* 到 **所有整数** 的 **和** 。
2. >能够 **重复执行一组指令** ，是计算机的一个基本特点，这种特点被称为 **循环** 。
3. >for语句的一般形式如下：

```C
for (初始化表达式；循环条件；循环表达式)
{
  程序代码
}
```

1. >建立 **循环条件** 的第一个表达式是 **初始化表达式** ，用于循环开始之前对 **循环变量** 进行 **初始化** 。
2. >在 *$C$* 语言中，**赋值语句** 也是一个合法的表达式。
3. >**循环条件** 只要得到满足，**循环体** 就会执行。
4. ><=符号是 *$C$* 语言的一种关系操作符，它的意思是小于或者等于。
5. >**关系操作符** 用于 **判断特定的条件是否成立** ，如果特定的条件 **成立** 的话，表达式的值就是 **真** ，否则，表达式的值就是 **假** 。

---

### 1.1.1 关系操作符

1. >不要把 **相等关系操作符** （==）和 **赋值操作符** （=）搞混了。
2. >`a = 2` 的意思是 **判断**  *$a$* 的值是否等于 *$2$* ；而 `a = 2` 的意思则是把 *$2$* **赋给** 变量 *$a$* 。
3. >当循环条件 **不再满足** 后，程序将 **退出循环** ，转到 *$for$* 语句后面的语句 **执行** 。
4. >for语句的执行顺序：

```C
1. >初始化表达式首先被求值。这个表达式常常用于初始化一个变量，该变量将被用在循环体中。这个变量通常被称为循环变量。循环变量的初始值通常是0或者1。
2. >接下来，循环条件表达式将被求值。如果表达式中制定的条件不满足（表达式的值为假），循环将立即结束。程序将转到for语句后面的语句执行。
3. >如果条件满足，循环体将被执行。
4. >循环表达式被求值，这个表达式通常用于修改循环变量，比如加上1或者减去1。
5. >回到第二步。
```

1. >循环表达式总是在循环体的 **执行之前** 被 **求值** ，即使第一次也如此。
2. >如果一开始循环条件就 **不满足** ，循环体有可能一次都不执行。
3. >千万 **不要** 在 *$for$* 语句的括号后面放置一个分号，那样将会 **立刻结束循环** 。
4. >在 *$C$* 语言中，任何允许 **单条语句** 的地方，我们都可以使用 **大花括号** 括起来一组语句，或者称为 **语句块** 。
5. >循环体的所有语句都使用了 **缩进** ，这使得我们很容易 **看清楚** 哪些语句是循环体。
6. >程序员也可以使用其他的 **编程风格** ，例如将循环体的左花括号 **另起一行书写** ，读者可以根据喜好任意选择一种风格，这对于程序 **没有任何影响** 。
7. >*$++n$* 是一个完全合法的C语言表达式。
8. >*$++n$* 这两个加号-- **自增操作符** ，是将其操作数的值 **增加** 。因为在程序中给某个变量增加 *$1$* 很常用，因此 *$C$* 语言专门引入了这个操作符。
9. >*$++n$* 和 *$n = n + 1$* 的意思是完全一样的。
10. >自减操作符由 **两个减号** 组成。
11. >将自增和自减操作符放到操作数的后面，这也是合法的。

---

### 1.1.2 对齐输出

1. >字符串 **%2i** 不仅告诉函数我们要输出一个 **整型数** ，而且还告诉它我们希望 **输出的整数占的宽度为两列** 。
2. >如果某个整数输出的宽度 **不足两列** ，那么就在前面用 **空格补齐** 。这种输出格式称为**右对齐** 。
3. >如果某个数输出的宽度 **超过了** 输出宽度限定符中指定的数值， *$printf$* 将会 **忽略** 该限定符，而按照该整数 **实际需要** 的宽度显示其数值。
4. >输出宽度限定符也可以用于 **其他类型的数值** 。

---

### 1.1.3 程序输入

1. >*$C$* 语言中的库函数 *$printf$* 用于将变量的的值 **显示在终端上** ，而 *$scanf$* 函数允许我们 **给程序输入数值** 。
2. >当我们的程序需要输入时，**提醒用户** 总是一件好事。在 **显示提示信息** 之后，我们的程序调用了 *$scanf$* 函数。
3. >传递给 *$scanf$* 函数的第一个参数是一个 **格式化字符串** ，它和用于 *$printf$* 函数的格式化字符串非常相似。在这里，格式化字符串不是用来表示我们要如何输出变量，而是我们要按怎样的格式 **读入数值** 。
4. >和 *$printf$* 函数中约定的一样， %i用于 **读入** 一个 **整数** 。
5. >**&number** 是用于告诉 *$scanf$* 函数，用户输入的数值 **保存在什么地方** 。
6. >变量名前面的 **&** 符号是必须的。在传递 *$scanf$* 函数作为 **参数的变量名之前** ，都必须要加一个 **&** 符号就可以了。
7. >如果 **忘记** 了在传递 *$scanf$* 函数作为 **参数的变量名之前** 加的 **&&** 符号，那么程序运行的结果将 **无法预料** ，甚至有可能 **意外崩溃** 。

---

### 1.1.4 嵌套的for循环

1. >程序 *$5.5$* 中使用了两层 *$for$* 语句。外层 *$for$* 的语句是：

```C
for (counter = 1; counter <= 5; ++counter)
```

1. >程序5.5中的其他地方不再使用循环变量 *$counter$* ，它仅仅起到 **循环计数** 的作用。但是，由于它是一个变量，因此必须在程序中 **声明** 。
2. >正像大括号显示的那样，这个外层循环的语句几乎包含了程序剩余的所有语句。如果按照下面的方式对这个程序进行抽象总计的话，读者也许能够更容易理解一些。

```C
循环 *$5$* 次
{
  获得用户输入的数字
  计算相应的数字
  显示结果
}
```

1. >在上面的抽象总结中，“计算相应的三角数”对应着实际程序中将变量 *$ritangularNumber$* 赋值为 *$0$* 和利用循环计算三角形数这段语句。
2. >因此，我们实际上看到一个 *$for$* 循环作为另外一个 *$for$* 循环的循环体，这在 *$C$* 语言中式 **完全合法** 的。
3. >实际上， *$C$* 语言允许最多 *$127$* 层循环。
4. >在处理更复杂的程序--例如嵌套的 *$for$* 语句时， **正确的缩进** 显得尤为重要。根据缩进，我们跟容易判断某个 *$for$* 循环到底包含哪些语句。

---

### 1.1.5 for循环的变体

1. >在 *$for$* 语句括号中的每一个地方，我们都可以使用 **逗号** 隔开多个表达式。
2. >有时候我们想要在 *$for$* 语句的初始化或者循环表达式中 **使用多个表达式** ，而有的时候恰恰相反，我们可能想要 **省略某个表达式** 。我们可以不在相应的位置写上表达式，而仅仅 **用分号标出其位置** 。
3. >在 *$for$* 循环中最常被省略的就是它的初始化表达式，这种时候，我们只需要 **保留相应的分号** ，而 **不必写出初始化表达式** 。
4. >如果在 *$for$* 语句中省略了循环条件表达式，那么该循环就是一个 **无限循环** ，理论上它将 **永远执行下去** 。
5. >如果我们在循环体中提供了其他的 **退出循环的方式** ，如 *$return$* 、 *$break$* 或者 *$goto$* 语句，那么就可以使用这种形式的循环。
6. >有时，有些变量只在 *$for$* 循环语句的 **范围内有效** ，它被称为 **局部变量** 。

---

## 1.2 while语句

1. >*$whlie$* 语句的常用形式如下：

```C
while (表达式)
{
  语句
}
```

1. >程序在执行的时候，首先对 **括号中的表达式求值** ，如果结果为真，程序就执行下面的语句。如果有多个语句需要执行，可以用 **大括号** 把这些语句括起来。在语句执行完成之后，程序就对括号中的表达式 **再次求值** 。如果结果是真，那么就接着执行后面的循环体，这个过程不断重复，**直到表达式的值为假** 。循环体执行完后，程序就接着 **执行循环体后面的语句** 。
2. >实际上，一个 *$for$* 语句总是能够翻译成一个对应的 *$while$* 语句，反过来也一样。
3. >*$for$* 语句的一般形式可以翻译成使用 *$while$* 语句表达的如下等价的形式：

```C
for (初始化表达式；循环条件；循环表达式)
{
  程序代码
}

while (循环条件)
{
  程序代码
  循环表达式；
}
```

1. >一般来说，如果 **循环的次数** 已经知道了，那么我们首选应该使用 *$for$* 语句。
2. >如果 **初始化表达式** 、**循环表达式** 和 **循环条件** 使用了 **同一个变量** ，很可能也应该使用 *$for$* 语句。
3. >为了编写程序，我们首先要找出 **解决问题的算法** 。
4. >很多时候，对于在手工状态下完成某项任务的方式 **进行一点分析** ，我们就可以得出解决该问题相应的 **计算机算法** 。
5. >为了 **逆序排列** 某个数的每一位数字，我么只需要 **总右向左连续的读出该数** 就可以了。
6. >在 *$while$* 循环体中的 *$printf$* 语句中，我们没有 **输出换行符** ，这样所有输出的数字就会 **显示在同一行上** 。
7. >我们在程序的最后使用了 *$printf$* 函数，该函数仅仅 **输出一个换行符** ，这样，在程序输出的所有的数字之后，**光标将被移到下一行的开始** 。

---

## 1.3 do语句

1. >在编写程序的时候，有时候我们需要在循环体结束的时候，而不是在循环开始的地方**检验循环条件** 。为此处理这种情况， *$C$* 语言设计了专门的语法结构，这就是 *$do$* 语句。
2. >*$do$* 语句的一般格式如下：

```C
do
程序语句
while（循环表达式）
```

1. >*$do$* 语句的执行顺序如下：程序首先执行程序语句所代表的语句，然后程序对表达式 **循环表达式求值** 。如果求值结果为真，程序将 **重新执行** 程序语句。只要循环表达式的值是真，程序就将 **重复执行** 程序语句。当循环条件的值变成假以后，程序将 **退出循环** ，接着执行后面的语句。
2. >我们可以简单的将 *$do$* 语句看作 *$while$* 语句的 **循环条件移到循环体之后** 所形成的一种变形形式。
3. >*$do$* 语句的特点在于，该语句可以保证循环体 **最少将被执行一次** 。

---

### 1.3.1 break语句

1. >在某些情况下，我们需要在某个条件成立的时候 **立刻退出循环** ，例如，当出现了 **某些错误** ，或者 **输入数据意外结束** 等。在这种情况下我们可以使用 *$break$* 语句。
2. >使用 *$break$* 语句可以使得 **程序立刻退出正在执行的循环** ，无论循环语句是 *$for$* 、 *$while$* 还是 *$do$* 。
3. >实际上，当程序执行遇到 *$break$* 语句时，，循环将被立即中止， *$break$* 后面的语句将被 **跳过** 。程序 **接着循环后面的语句** 开始执行。
4. >如果在 **嵌套循环** 中使用了 *$break$* 语句，那么只有 **最里面的循环** 中止执行。
5. >*$break$* 语句的格式非常简单，只需要在 **关键字** *$break$* 后面跟上 **分号** 就可以了。

---

### 1.3.2 continue语句

1. >当程序执行遇到 *$continue$* 语句时，该语句 **后面的所有语句都将被跳过** ，循环的其他部分仍将 **照常执行** 。
2. >*$continue$* 语句最常用的用途是：当 **满足某些条件** 的时候，**跳过循环体中的部分语句** ，反之则执行这些语句。
3. >*$continue$* 的格式如下： *$continue;$*
4. >作为 **初学者** ，除非对于 *$break$* 语句和 *$continue$* 语句非常熟悉，否则读者应该 **避免在程序中使用 *$break$* 语句和 *$continue$* 语句** 。这两个语句 **很容易被滥用** ，导致 编写出来的程序 **很难阅读和调试** 。

---