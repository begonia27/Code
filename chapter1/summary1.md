# 第一章

## 第一节的总结

* 构成命题的条件：
  * 它是一个陈述句，必须要可以判断出真假。
  * 它要么为真，要么为假，不能真假并存。
* 命题的变量可以用字母来表示
* 真命题的真值为真，用 T 来表示；真命题的真值为假，用 F 来表示
* 命题 p 且 q ，写作 $p \wedge q$
* 命题p或q，写作 $p \vee q$
* 命题p同或q，写作$p \bigotimes q$
* 命题p异或q，写作$p \bigoplus q$
* 命题p条件q，写作$p \rightarrow q$
* 命题p双条件q，写作$p \leftrightarrow q$
* 逆命题：
  * 命题$q \rightarrow p$是命题$p \rightarrow q$的逆命题
* 否命题：
  * 命题$\neg p \rightarrow \neg q$是命题$p \rightarrow q$的否命题
* 逆否命题：
  * 命题$\neg q \rightarrow \neg p$是命题$p \rightarrow q$的逆否命题
* 逻辑运算符的优先级：
  * |$\neg$|1|
    |----|----|
    |$\wedge$|2|
    |$\vee$|3|
    |$\rightarrow$|4|
    |$\leftrightarrow$|5|
* 真值和位的对应关系是：T对应1，F对应0
* 符号 *or* 和 *and* 以及 *xor* 对应的是运算符的$\vee$、$\wedge$、$\bigotimes$(同或)

## 第二节的总结

* 为了精确表达数学、自然科学以及自然语言中的语句，可以加个他们翻译成逻辑语言。
* 把自然语言的语句翻译成复合命题可以消除歧义；翻译时要根据语句的含义做一些合理的假设。
* 系统规范说明：
  * 在描述硬件系统和软件系统时，将自然语言翻译成逻辑表达式是很重要的一部分。系统和软件工程师根据自然语言描述的需求，生成精确而无二义性的规范说明。
* 系统规范说明应该是一致的，如果不一致就无法开发出一个满足所有规范说明的系统。
* 布尔搜索：是指采用命题逻辑的技术搜索。
* 在布尔搜索中，联结词AND用于匹配同时包含两个搜索项的记录，联结词OR用于匹配两个搜索项之一或两项均匹配的记录，而联结词NOT(ND NOT)用于排除某个特定的搜索项。
* 一般解逻辑谜题有两种方法，一种是穷举法：是指把所有可能的结果全都列出来，再根据题目的意思再进行判断；另一种是根据题目的意思列出逻辑式，再进行判断。
* 在解逻辑谜题中，列逻辑式要非常注意自然语言和逻辑式中对应的关系。千万不能列错。列出式子的下一步就是将各自的语句分别同或 $p$ 或者同或 $q$ 。如果遇到可真可假的情况，比如间谍，可以先将其看做是假的。当一个人说自己是无赖或间谍的时候，直接取非，不用再继续进行同或那个步骤了。其他的情况都要和说话的那个人同或。
* 逻辑电路的与门、或门以及逆变器的电路图要注意。逆变器代表取非。或门代表取或。与门代表取且。
* 逆变器是尖三角，或门是稍微凸一点的三角，与门是头比较圆的形状。

## 第三节的总结

* 永真式：一个真值永远为真的“复合命题”叫永真式；
* 矛盾式：真值永远为假的“复合命题”叫矛盾式。
* 逻辑等价：在任何可能的情况下，两个符合命题具有相同的真值，此时称他们为逻辑等价。
* 判定两个复合命题是否等价的方法之一是使用真值表。
* 当我们用真值表来证明复合命题等价时，每增加一个命题变元真值表的行数就要翻倍；如果一个复合命题由n个命题变元组成，则需要2的n次行。
* 在等价关系中，T表示永远为真的复合命题，F表示永远为假的复合命题。

## 表6

* $p \wedge T \equiv p$恒等律
* $p \vee F \equiv p$
* $p \vee T \equiv T$支配律
* $p \vee F \equiv F$
* $p \vee p \equiv p$幂等律
* $p \wedge p \equiv p$
* $\neg (\neg p) \equiv p$双重否定律
* $p \vee q \equiv q \vee p$交换律
* $p \wedge q \equiv q \wedge p$
* $(p \vee q) \vee r \equiv p \vee (q \vee r)$ 结合律
* $(p \wedge q) \wedge r \equiv p \wedge (q \wedge r)$
* $p \vee (q \wedge r) \equiv (p \vee q) \wedge (p \vee r)$ 分配律
* $p \wedge (q \vee r) \equiv (p \wedge q) \vee (p \wedge r)$
* $\neg (p \wedge q) \equiv \neg p \vee \neg q$德·摩根律
* $\neg (p \vee q) \equiv \neg p \wedge \neg q$
* $p \vee (p \wedge q) \equiv p$吸收律
* $p \wedge (p \vee q) \equiv p$
* $p \vee \neg p \equiv T$否定律
* $p \wedge \neg p \equiv F$

## 表7

* $p \rightarrow q \equiv \neg p \vee q$
* $p \rightarrow q \equiv \neg q \rightarrow \neg p$
* $p \vee q \equiv \neg p \rightarrow q$
* $p \wedge q \equiv \neg (p \rightarrow \neg q)$
* $\neg (p \rightarrow q) \equiv p \wedge \neg q$
* $(p \rightarrow q) \wedge (q \rightarrow r) \equiv p \rightarrow (q \wedge r)$
* $(p \rightarrow r) \wedge (q \rightarrow r) \equiv (p \vee q) \rightarrow r$
* $(p \rightarrow q) \vee (p \rightarrow r) \equiv p \rightarrow (q \vee r)$
* $(p \rightarrow r) \vee (q \rightarrow q) \equiv (p \wedge q) \rightarrow r$

## 表8

* $p \leftrightarrow q \equiv (p \rightarrow q) \wedge (q \rightarrow q)$
* $p \leftrightarrow q \equiv \neg p \leftrightarrow q \neg q$
* $p\leftrightarrow q \equiv (p \wedge q) \vee (\neg p \wedge \neg q)$
* $\neg (p \leftrightarrow q) \equiv p \leftrightarrow \neg q$
* 以上为表8
* 德·摩根律可以扩展为$\neg (p1 \vee p2 \vee … \vee pn) \equiv (\neg p1 \wedge \neg p2 \wedge … \wedge pn)$
* 和    $\neg (p1 \wedge p2 \wedge … \wedge pn) \equiv (\neg p1 \vee \neg p2 \vee … \vee pn)$
* 采用这种扩展的德·摩根律可以简写为$$\neg (\bigvee^n_{j = 1}p_{j}) \equiv \bigwedge^n_{j = 1}\neg p_{j}$$和$$\neg (\bigwedge^n_{j = 1}p_{j} \equiv \bigvee^n_{j = 1} \neg p_{j}$$
* 等价式$\neg (p \vee q) \equiv \neg p \wedge \neg q$ 说明一个析取式的否定是由各分命题的否定的合取式组成的
* 等价式$\neg (p \wedge q) \equiv \neg p \vee \neg q$ 说明一个合取式的否定是由各分命题否定的析取式组成的
* 命题的可满足性：存在一个对其变元的真值赋值使其为真
* 命题的不可满足性：当复合命题对所有变元的真值赋值都是假的，则复合命题不满足。
* 可以用真值表来确定命题是否可满足，也可以对真值表做出一些推理来判断
* [怎样书写逻辑符号呢？](http://mohu.org/info/symbols/symbols.htm)
* 下标是_{ }            上标是^{ }        例如：$\bigwedge^2_{i = 1}$
* 大符号是：逻辑符号的表示字母前加big；例如：$\bigwedge$

## 第四节的总结

* **谓词**：某一性质对于某一类型的所有对象均成立，存在一个对象使得某一特性成立。
* 谓词是表明语句的主语具有的一个性质，比如$大于3$
* **变量**：它是语句的主语，而且某些语句中不止有一个变量，例如：$x = y + 3$
* **命题函数**：涉及n个变量$x_{1},x_{2}···,x_{n}$的语句可以表示为：形式为P(x_{1},x_{2},···,x_{n})的语句是命题函数P在n元组($x_{1},x_{2}···,x_{n}$)的值，P也称为n位谓词或者n元谓词
* **前置条件**：描述合法输入的语句叫做前置条件。
* **后置条件**：程序运行的输出应该满足的条件称为后置条件。

* **量词**：当命题函数的变量被赋值，所得到的语句就变成 具有某个真值的命题。
* **量化**：表示在何种程度上谓词对于一定范围的个体成立。
* **谓词演算**：处理谓词和量词的逻辑领域称为“谓词演算”

* **全称量词**：许多数学命题断言某一性质对于变量在某一特定领域内的所有值均为真，这一特定领域称为变量的“论域”。（论域规定了变量x所有可能取的值）
* 符号$\forall x P(x)$表示P(x)的全称量化，其中$\forall$称为全称量词
* 命题$\forall x P(x)$为真：每一个x，都P(x)都为真（必须每一个都为真）
* 命题$\forall x P(x)$为假：有一个x，使得P(x)为假（只要有一个，多个，甚至全部为假，则为假）
* 全称量词可以使用各种形式表达：对所有、对每个、全部的、对每一个、任意给定的、对任意的、对任一的。

* **存在量词**：该命题为真仅当论域中至少有一个x的值使得P(x)为真
* 符号$\exists x P(x)$表示P(x)的存在量化，其中$\exists$称为存在量词
* 命题$\exists x P(x)$为真：有一个x，使得P(x)为真（只要有一个，多个，甚至全部为真，则为真）
* 命题$\exists x P(x)$为假：对每一个x，P(x)都为假（必须每一个为假才为假）
* 存在量词可以使用各种形式表达：存在、对某些、对某个、至少有一个、有。

* **唯一性量词**：$]\exists ! x P(x)$是指存在一个唯一的x使得P(x)为真。用符号$\exists !$ 或者$\exists _{1}$表示。
* 唯一性量词可以使用各种形式表达：恰好存在一个，有且只有一个。
  
* **量词的优先级**：量词 **$\forall$** 和 **$\exists$** 比命题演算中的所有逻辑运算符都具有更高的优先级。
* **变量的绑定**：如果变量在公式中的所有限定该变量的量词的作用域之外，那么这个变量是自由的。在语句$\exists x (P(x) \wedge Q(x) \vee \forall x R(x))$中，所有变量都是受约束的。第一个量词$\exists x$的作用域是表达式$P(x) \wedge Q(x)$,因为$\exists x$只作用语句的$P(x) \wedge Q(x)$的部分，而非其余部分。第二个量词$\forall x$的作用域是表达式$R(x)$。
  
* **全称量词**对于一个合取式是可分配的。
* **存在量词**对于一个析取式是可分配的。

* **量化表达式的否定**：(全称量化命题)$\neg \forall x P(x) \equiv \exists x \neg P(x)$
* **量化表达式的否定**：(存在量化命题)$\neg \exists x Q(x) \equiv \forall x \neg Q(x)$

* **量词的德·摩根律1**：$\neg \exists x P(x) \equiv \forall x \neg P(x)$
* 何时为真：对每个x,P(x)为假。
* 何时为假：有x,使P(x)为真。

* **量词的德·摩根律2**：$\neg \forall x P(x) \equcv \exists x \neg P(x)$
* 何时为真：有x使得P(x)为假。
* 何时为真：对每个x,P(x)为真。

* **全称**量词 **$\forall$** 和**蕴含**式 **$\rightarrow$** 有关
* **存在**量词 **$\exists$** 和**合取**式 **$\wedge$** 有关

* **Prolog事实**：通过指定那些满足谓词的元素来定义谓词。
* **Prolog规则**：使用$Prolog$事实定义好的那些谓词来定义新的谓词。
* 在$Prolog$中，逗号用于表示谓词的合取，分号表示谓词的析取。
* 在进行了第一行的$Prolog$输出之后，要用逗号才可以进行下一步的输出，而不是使用enter键位。

* 序偶：它可以看做是两个元素的集合，但是它们之间有次序的关系，在两组含有相同元素的集合中，如果集合里元素的位置不一样，那这两个集合也不相同。
