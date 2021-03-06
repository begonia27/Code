# 第九章 使用结构

* [1.1 用于存储日期的结构](#11-用于存储日期的结构)

  * [1.1.1 在表达式中使用结构](#111-在表达式中使用结构)

---

* [1.2 函数与结构](#12-函数与结构)

  * [1.2.1 用于存储时间的结构](#121-用于存储时间的结构)

---

* [1.3 结构的初始化](#13-结构的初始化)

  * [1.3.1 复合字面量](#131-复合字面量)

---

* [1.4 结构数组](#14-结构数组)

---

* [1.5 包含结构的结构](#15-包含结构的结构)

---

* [1.6 包含数组的结构](#16-包含数组的结构)

---

* [1.7 结构的变形形式](#17-结构的变形形式)

---

## 1.1 用于存储日期的结构

1. >**数组** 允许将一组 **相同类型的数值** 保存在单个的逻辑实体中，而 **结构** 是将 **若干个** 数据组合为 **单个逻辑实体** 。
2. >与普通的变量类型--*$float$* 、*$int$* 、*$char$* 等不同，**存取结构** 需要特殊的 **语法** 。如果我们要使用结构变量的 **某个成员** ，应该首先写出该 **结构变量的名字** ，后面跟上 **一个点** ，然后再写出 **成员变量的名字** 。
3. >在 **结构变量名** 和 **点号** 之间以及 **点号** 与 **成员变量名之前** 是 **不允许有空格** 的。
4. >*$main$* 函数的第一条语句定义了一个名为 *$date$* 的结构，该结构包含三个 **成员变量** ：*$year$* 、*$month$* 、*$day$* 。

>>``C
    int main(void)
    {
      struct date
      {
        int month;
        int day;
        int year;
      }
    }
>>``

1. >语句 `struct date today;` 是指定义了一个类型为 *$struct date$* 的变量 *$ today$* ，因此编译器将会在计算机中给该变量 **分配内存空间** ，用于存储 *$date$* 结构的三个整型数。
2. >**格式化输出字符串** `%.2` 的作用是将某个整数按 **两位数** 显示，不足的在左面补上 *$0$* 。
3. >结构的成员变量在表达式中的 **计算规则** 与普通的变量是完全相同的，因此，当一个整型的结构变量与一个整型数 **相除** 的时候， *$C$* 语言同样使用 **整数除法规则** 。

---

### 1.1.1 在表达式中使用结构

1. > *$date$* 结构的定义出现在 **所有函数的外面** ，这种方式的声明使得  **在整个文件内** 我们都可以使用 *$date$* 结构。
2. >如果一个结构  **在一个函数中** 被定义，那么只要在这个 **函数内部** 可以使用该结构，也就是说，该结构定义的 **作用域是局部**的，只限于定义它的函数。如果结构的定义被放在所有函数的外面，那么该结构定义的作用域就是 **全局** 的，**整个源文件** 都可以使用该结构。
3. >虽然结构也是一种将一组值组合起来的手段，但是结构变量 **作为函数参数** 的时候，它的行为却与普通变量相类型，而 **与数组不同** 。具体来说， **在被调用的函数中处理的只是实际参数的拷贝** ， **对于形式参数的任何修改** ，都 **不会影响** 到原来的实际参数。

---

## 1.2 函数与结构

1. >如果函数的 **变量名** 取得很恰当，那么就会使得 **语句理解** 起来非常的容易。
2. >函数 *$isLeapYear$* 也很容易理解。

---

### 1.2.1 用于存储时间的结构

1. >假定我们在程序中需要 **存储时间** ，那么存储的内容就包括 **小时、分钟、秒钟** 。
2. >在绝大多数计算机系统中，都采用 *$24$* 小时制来 **表示时间** ，这种表达法可以不用给时间再加上 *$a.m.$* 或者 *$p.m.$* 的修饰符。
3. >在 *$24$* 小时制中，午夜 *$12$* 时用 *$0$* 来表示，每小时递增 *$1$* ，直到到达 *$23$* ，也就是午夜 *$11：00$* 。因此， *$24$* 小时制的 *$4:30$* 实际上是 *$4:30a.m.$* ，而 *$16:30$* 表示的是 *$4:30p.m.$* ， *$12:00$* 代表中午，而 *$00:01$* 表示午夜过后的一分钟。
4. >所有的  **计算机系统** 都有一个 **内置的时钟** ，该时钟的用途非常广泛：它可以告诉用户 **当前的时间** ；它可以 **在指定的时间激活一个事件** 或者 **运行某个程序** ；或者 **记录某个事件** 发生的具体时间。在计算机系统中通常 **由若干个程序与时钟相关** ，其中之一的作用就是 **更新系统的时间** ，该程序通常 **每秒钟执行一次** 。
5. >在 *$main$* 函数中，我们要求用户输入时间。程序中使用了如下的格式化输入字符串： `“%i：%i：%i”` 。当使用 *$scanf$* 函数的时候，如果我们在格式化输入字符串中指定了非格式化字符，这意味着 **读者的输入中也应该包含这些字符** 。因此，上面的格式化输入字符串要求用户输入 **三个整数** ，第一个和第二个  **用冒号隔开** ，第二个和第三个也用 **冒号隔开** 。

---

## 1.3 结构的初始化

1. >**结构变量的初始化** 和数组的初始化很类似，我们可以用 **逗号** 将结构成员的值分割开来，并 **用一对大括号** 将其包围起来。例如我们要将 *$struct date$* 类型的结构变量 *$today$* 的值设置为 *$2005$* 年 *$7$* 月 *$2$* 日，可以使用如下的语句：`struct date today = {7, 2, 2005};`。
2. >结构变量在初始化语句的 **执行方式上** 与其他普通变量也是类似的，如果 **变量是一个局部变量** ，那么每次进入函数体的时候，该变量的初始化语句都要 **重新执行** 。如果这个变量是一个 **静态变量** ，那么该初始化语句 **只在程序开始执行的时候执行一次** 。
3. >*$C$* 语言要求 **结构初始化表达式** 必须是 **常量表达式** 。
4. >和数组的初始化类似，在初始化表达式中给出的 **常量表达式个数** 也可以 **少于** 结构变量的 **成员变量个数** 。在没有给出初值的情况下，该成员变量的 **初值是未定义** 的，也就是说， **由编译器的实现自行决定** ，可能为 *$0$* ，也可能为 **任何值** 。
5. >通过 **给出成员变量的名字** ，我们可以 **以任意的顺序** 初始化结构变量的成员，或者 **只初始化部分** 成员。例如 `struct time time1 = {.hour = 12. .minute = 10};` 。

---

### 1.3.1 复合字面量

1. >我们可以使用 **复合字面量** 的方式，在一个语句给结构变量的 **多个成员变量赋值** 。比如假定我们已经声明了一条语句，那么我们可以将赋值变量的 **三条语句用一条语句所替代** ，例如：`today = (struct date){9, 25, 2004};`，这是 **一条赋值语句** 而不是声明语句，它可以 **出现在程序的任何位置** 。
2. >上一条语句中的 **类型转换操作符** 用于告诉编译器后面的 **常量表达式的类型** ，而常量表达式本身的 **组成规则** 与我们前面讲过的 **结构变量初始化表达式的规则** 相同。
3. >在复合字面量表达式中，我们同样可以 **指定需要初始化的成员变量** 的名字，例如：`today = ((struct date){.month = 9, .day = 25, .year = 2004};` 。
4. >使用成员变量可以让我们 **按照任意的顺序初始化结构成员变量** 。如果 **不使用变量名** 的话，我们就必须按照该结构类型声明 **成员变量顺序** 来给出相应的初始化值。

---

## 1.4 结构数组

1. >结构可以让我们 **将逻辑上相关的一组值** 组织起来，作为 **一个单独的变量** 处理。
2. >有一个更好的方式可以帮助我们处理 *$10$* 个时间变量，那就是将 *$C$* 语言提供的两个工具-- **数组和结构结合起来** 。
3. > *$C$* 语言并不限制我们只能在数组中保存简单的数据类型，我们同样可以在数组中保存结构。
4. >语句`struct time experiments[10];`表示的是 **定义了一个结构数组** ，该数组包含 *$10$* 个元素，而每个元素都是一个 *$struct time$* 类型的变量。
5. >如果要将上述语句中的 *$experiments$* 数组中的第 *$4$* 号元素传递给函数 *$checkTime$* ，我们可以使用如下的语句：`checkTime(experiments[4]);` 。当然，函数 *$checkTime$* 必须接受 *$struct time$* 类型的参数，其定义可能如下所示:

>>``C
void checkTime (struct time t0)
{
  ·
  ·
  ·
}
>>``

1. >对于 **结构数组进行初始化** 和 **多维数组初始化** 是类似的，例如下面的语句：`struct time runtime [5] = {{12, 0, 0}, {12, 30, 0}, {13, 15, 0}};` 声明了一个拥有 *$5*$ 个元素的结构数组 *$runTime*$ ，并将前三个元素初始化为 *$12:00:00*$ 、 *$12：30:00*$ 和 *$13:15:00*$ 。内层的大括号实际上是可有可无的，也就是说，下面的语句实际上和上面的初始化语句是等价的。
2. >结构数组是 *$C$* 语言中非常有用的一个工具。

---

## 1.5 包含结构的结构

1. >在定义结构方面 *$C$* 语言为我们提供了 **极大的灵活性** 。比如，我们可以 **定义一个结构** ，其 **成员变量是另外一个结构** ，或者可以 **定义成员变量为数组类型的结构** 。
2. >当我们需要 **精确记录某些事件** 发生时的时候，我们就需要 **把日期和时间 ** 结合起来。
3. >当定义一个新的结构类型，例如： *$dateAndTime$* ，该结构拥有 **两个成员变量** ，一个是 *$struct date$* 类型，而另外一个是 *$struct time$* 类型，如下所示：

>>``C
struct dateAndTime
{
  struct date sdate;
  struct time stime;
}
>>``

1. >在上述的例子中， *$dateAndtime$* 结构的第一个成员变量名为 *$sdate$* ，第二个成员变量名为 *$stime$* ，当然，在定义 *$dateAndTime$* 结构之前，我们必须首先分别定义 *$date$* 结构和 *$time$* 结构。
2. >当声明完 *$struct dateAndTime$* 类型的变量后，为了引用结构中的 *$sdate$* 成员，我们可以使用如下表达式： *$exent.sdate$* 。
3. >同样，我们也可以使用 *$dateUpdate$* 结构中的 *$time$* 结构来完成同样的事情： `event.stime = dateUpdate(event.sdate);` 。
4. >在例子`event.sdate.month = 10`中，这句话的意思是将 *$evenet$* 的发生时间定义为 *$10$* 月份。
5. >关于包含结构的 **结构变量的初始化方式** ，例如将 *$event$* 设置为 *$2004$* 年 *$2$* 月 *$1$* 日， *$3:30:00$* ，可以表示为`srtuct dateAndTime event = {{2, 1, 2004}, {3, 30, 30}};`。当然我们可以使用成员变量名的初始化方式：`struct dateAndTime event = {{.month = 2, .day = 1, .year = 2004}, {.hour = 3, .minutes = 30, .seconds = 30}};` 。
6. >`struct dateTime events[100];`的意思是声明了一个包含有 *$100$* 个 *$struct dateAndTime$* 类型元素的数组。
7. >如果要针对第 *$i$* 号元素调用 *$dateUpdate$* 函数，则可以使用如下的语句：`event[i].sdate = dateUpdate(events[i].sdate);` 。

---

## 1.6 包含数组的结构

1. >在包含 **数组成员的结构类型** 中，最常见的是 **字符数组** 。
2. >假定我们需要定义一个名为 *$month$* 的结构，该结构包含 **两个程序** ，某个月份的天数和该月份名字的三字符缩写。该结构的定义如下：

>>``C
struct month
{
  int numberOfDays;
  char name[3];
};
>>``

1. >上面的语句定义了一个名为 *$month$* 的结构，该结构包含一个名为 *$numberOfDays$* 的整型成员变量和名为 *$names$* 的字符数组成员变量。
2. >我们可以按照下面的方式定义类型为 *$struct month$* 的变量：`struct month aMonth;` 。
3. >当给 *$struct month$* 变量赋初值时，可以这样： `aMonth.numberOfDays = 31; ，aMonth.name[0] = 'j';` 。
4. >表达式 *$month[0]$* 代表的是 *$months$* 数组中的第一个元素，也就是整个 *$month$* 结构。因此，如果我们想要把 *$months[0]$* 作为参数传递给某个函数，该函数必须被声明为接收 *$struct month$* 类型的函数。
5. >表达式 *$months[0].name$* 代表的是数组 *$months$* 中的第一个结构元素的 *$name$* 成员变量，如果要将该表达式作为参数传递给某个函数，则该函数必须被声明为接收一个字符数组类型的参数。

---

## 1.7 结构的变形形式

1. >*$C$* 语言允许我们在 *$定义结构类型$* 的时候同时声明结构变量，为了达到这一点，我们只要 *$在结构定义语句的结束分号前面$* 加上 *$变量名$* 就可以了。如下所示。

>>``C
struct date
{
  int month;
  int day;
  int year;
}todaysDate, purchaseDate;
>>``

1. >该语句定义了结构类型 *$struct date$* ，并且定义了两个该类型的变量 *$todaysDate$* 和 *$purchaseDate$* 。
2. >采用上面这种办法，我们可以赋予 **结构变量初值** 。

>>``C
struct date
{
  int month;
  int day;
  int year;
}todaysDate = {1, 11, 2005};
>>``

1. >还有如下的语句：

>>``C
struct date
{
  int month;
  int day;
  int year;
}dates[100];
>>``

1. >该语句定义了一个包含 *$100$* 个元素的数组 *$dates$* ，该数组的 **每一个元素都是一个结构变量** 。该结构包含三个整型数： *$month$* 、 *$day$* 和 *$year$* 。
2. >由于上面的例子中，在声明结构元素数组的时候 **并没有给出** 结构的名称，因此如果想要 **再声明其他同样类型的变量** ，只能 **重新定义** 该结构。

---
