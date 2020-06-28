# 第2章 基本结构：集合、函数、序列、求和与矩阵

* [2.1 集合](#21-集合)

  * [2.1.1 引言](#211-引言)

  * [2.1.2 文氏图](#212-文氏图)

  * [2.1.3 子集](#213-子集)

  * [2.1.4 集合的大小](#214-集合的大小)

  * [2.1.5 幂集](#215-幂集)

  * [2.1.6 笛卡尔积](#216-笛卡尔积)

---

* [2.2 集合运算](#22-集合运算)

  * [2.2.1 引言](#221-引言)

  * [2.2.2 集合恒等式](#222-集合恒等式)

  * [2.2.3 扩展的并集与交集](#223-扩展的并集与交集)

  * [2.2.4 集合的计算机表示](#224-集合的计算机表示)

---

* [2.3 函数](#23-函数)

  [* 2.3.1 引言](#231-引言)

  [* 2.3.2 一对一函数和映上函数](#232-一对一函数和映上函数)

  [* 2.3.3 反函数和函数组合](#233-反函数和函数组合)

  [* 2.3.4 函数的图](#234-函数的图)

  [* 2.3.5 一些重要的函数](#235-一些重要的函数)

  [* 2.3.6 部分函数](#236-部分函数)

---

## 2.1 集合

1. >离散数学的许多内容主要研究 **离散结构** ，用以表示离散对象。许多重要的离散结构是用结合来构建的，这里 **集合就是对象的汇集** 。
2. >**函数** 在整个离散数学中起着重要的作用。可以用以 **表示算法的计算复杂度** ， **研究的集合的大小** ， **计算对象的数量** ，以及无数的其他应用方式。
3. >这一章我们将介绍 **序列** 的概念，即表示 **元素的有序排列** 。
4. >通过引入一个 **集合的大小** 或 **基数的概念** 就可以研究无限集合的相对大小问题。
5. >当一个集合是 **有限的** 或者 **与正整数的集合具有一样的大小** ，我们说这个 **集合是可数的**。
6. >**存在一些函数** 是不能用任何编程语言写的计算机程序来计算的。
7. >**矩阵** 在离散数学中可用于 **表示很多种离散结构** 。

### 2.1.1 引言

1. >这一节我们将研究 **最基本的离散结构——集合** ，所有其他离散结构都建立于集合之上。
2. >**集合语言** 是以有组织的方式来研究这些集合的 **工具** 。
3. >集合是 **对象的一个无序的聚集** ，对象也称为集合的 **元素** 或 **成员** 。
4. >通常我们用 **大写字母** 来 **表示集合** ，用 **小写字母** 表示 **集合中的元素**。
5. >我们采用 **在花括号之间** 列出所有元素的方法。这种描述集合的方式称为 **花名册方法** 。
6. >尽管集合常用来 **聚集具有共同性质的元素** ，但也不妨碍集合拥有 **表面看起来毫不相干的元素** 。
7. >当元素的一般规律显而易见时就用 **省略号 *（……）* 代替** 。
8. >描述集合的另一种方式是 **使用集合构造器符号** 。
9. >**自然数集** 用 *N = {0，1，2，3， ……}* 表示。
10. >**整数集** 用 *Z = {……，-2，-1，0，1，2，……}* 表示。
11. >**正整数集** 用 *Z^{+} = {1，2，3，……}* 表示。
12. >**有理数集** 用 *Q = {p/q|p\in Z，q\in Z，且 q \not = 0 }* 表示。
13. >**实数集** 用 *R* 表示。
14. >**正实数集** 用 *R^{+}* 表示。
15. >**复数集** 用 *C* 表示。
16. >表示 **区间** 的记号 *[a,b]* 和 *(a,b)* ； *[a,b]*是 $a$ 和 $b$的闭区间， *(a,b)* 是 $a$ 和 $b$ 的开区间。
17. >**数据类型** 或 **类型** 是一个集合的名称。
18. >两个集合 **相等** 当且仅当它们有 **相同**  的元素；用符号可表示为： >$\forall x (x \in A \leftrightarrow x \in B)$ 。
19. >集合中 **元素的顺序** 无关紧要。
20. >同一个元素被列出来 **不止一次** 也没关系。
21. >**空集** 是指有一个特殊的不含任何元素的集合，用符号 $\emptyset$ 表示，也可以用 *{}* 来表示。
22. >只有 **一个元素** 的集合叫做 **单元素集** 。
23. >集合 *{\emptyset}* 的唯一元素是空集本身。
24. >要注意， *{\emptyset}* 和 *$\empty$* 不一样。
25. >**空集可以比作一个空的文件夹** ，而 **仅包含一个空集的集合可以比作一个文件夹里只有一个文件夹，并且这个文件夹是空的** 。
26. >**朴素集合论** ：这是基于对象的直觉概念基础上，将集合描述为对象的聚集最先由德国数学家乔治·康托于1895年提出的。
27. >**悖论** 是指由集合的直觉定义以及无论什么版本都存在一个恰好具有该性质的对象组成的集合这种直觉概念的使用所产生的理论导致悖论或逻辑不一致性。

### 2.1.2 文氏图

1. >集合可以用 **文氏图** 形象地表示。在文氏图中全集 *$\bigcup$* 包含所考虑的全部对象，用 **矩形框** 来表示。
2. >在矩形框内部， **圆形** 或 **其他集合图形** 用于表示 **集合** 。
3. >有时候用 **点** 表示 **集合中特定的元素** 。
4. >文氏图常用于表示集合之间的 **关系** 。

### 2.1.3 子集

1. >集合 $A$ 是集合 $B$ 的子集当且仅当 $A$ 的每个元素也是 $B$ 的元素；用记号 $A \subseteq B$ 表示 **集合 *$A$* 是集合 *$B$* 的子集** 。
2. >$A \subseteq B$ 当且仅当量化式 $\forall x (x \in A \rightarrow x \in B)$ 为真。
3. >证明 $A$ **是** $B$ 的 **子集** ：要证明 $A \sunseteq B$ ，需要证明如果 $x$ 属于 $A$ 则 $x$ 也属于 $B$ 。
4. >证明 $A$ **不是** $B$ 的子集，要证明 $A \not \subseteq B$ ，需要找一个 $x \in A$ 使得 $x \not \in B$ 。
5. >每个非空集合 $S$ 都至少有两个子集，空集和集合 $S$ 本身，即 $\empty \subseteq S$ 和 $S \subseteq S$ 。
6. >若集合 $A$ 是集合 $B$ 的子集但是 $A \not = B$ 时，就写成 $A \subset B$ 并说 $A$ 是 $B$ 的真子集。
7. >$\forall x (x \in A \rightarrow B) \wedge \exists x (x \in B \not \in A)$
8. >证明 **两个集合具有相同元素** 的一个有效方法是证明每个集合是另一个的子集，即如果 $A$ 和 $B$ 为集合，并且 $A \subseteq B$ 和 $B \subseteq A$ ，则有 $A = B$ 。
9. >证明两个集合 $A$ 和 $B$ **相等** 就证明 $A \subseteq B$ ， $B \subseteq A$ 。
10. >${a} \in A$ 但是 $a \not \in A$ 。

### 2.1.4 集合的大小

1. >集合广泛用于 **计算问题** 。
2. >令 $S$ 为集合，如果 $S$ 中恰有 $n$ 个不同的元素，这里 $n$ 是非负整数，我们就说 $S$ 是 **有限集** ，而 $n$ 是 $S$ 的 **基数** ，$S$ 的基数记为  *$|S|$* 。
3. >一个集合称为是 **无限的** 如果它不是有限的。
4. >**正整数集合** 是无限的。

### 2.1.5 幂集

1. >许多问题涉及要 **检查一个集合的元素的所有可能组合** 看它们 **是否满足某种性质** 。
2. >注意， **空集** 和 **集合自身** 都是这个子集的集合的成员。
3. >空集只有一个子集。
4. >集合 ${\emptyset}$ 有两个子集，即 $\emptyset$ 和集合 ${\emptyset}$ 自身。
5. >如果一个集合有 *$n$* 个元素，那么它的幂集就有 *$2^{n}$* 个元素。

### 2.1.6 笛卡尔积

1. >有时候元素聚集中 **次序** 是很重要的。
2. >有序 $n$ 元组 （ $a_{1} ， $a_{2}$ ，…… ， $a_{n}$ ）是以 $a_{1}$ 为第一个元素， $a_{2}$ 为第二个元素，……， $a_{n}$ 为第 $n$ 个元素的有序聚集。
3. >有序 *$n$* 元组是 **相等的** 当且仅当每一对对应的元素都相等。
4. >有序二元组称为 **序偶** 。
5. >**笛卡尔积 $A *B$ ** 由所有形如 $(a,b)$ 的序偶组成。
6. >笛卡尔积 $A *B$ 和 $B*A$ 是不想等的，除非 $A = \emptyset$ 或 $B = \emptyset$ 。（这样 $A * B = \emptyset$ 或 $A = B$ ）。
7. >**笛卡尔积 $A * B$ 的一个子集 $R$** 称为是从集合 $A$ 到集合 $B$ 的一个关系。
8. >**从集合 $A$ 到其自身的一个关系** 称为是 $A$ 上的一个关系。

### 2.1.7 使用带量词的集合符号

1. >通过使用 **特定符号** 来显式地 **限定一个量化命题的论域** 。
2. >$\forall x \in S(P(x))$ 表示 $P(x)$ 在 **集合 $S$ 所有元素上的全称量化** 。
3. >$\exists x \in S(P(x))$ 表示 $P(x)$ 在 **集合 $S$ 所有元素上的存在量化** 。

### 2.1.8 真值集和量词

1. >将 **集合理论** 和 **谓词逻辑** 的一些概念结合起来是：给定谓词 $P$ 和论域 $D$ ，**定义 $P$ 的真值集** 为 $D$ 中使 $P(x)$ 为真的元素 $x$ 组成的集合。
2. >**$P(x)$ 的真值集** 为 *${x \in D | P(x)}$* 。
3. >$\forall x P(x)$ 在论域 $\bigcup$ 上为真当且仅当 $P$ 的真值集 **非空** 。
4. >$\exists x P(x)$ 在论域 $\bigcup$ 上为真当且仅当 $P$ 的真值集 **非空** 。

---

## 2.2 集合运算

### 2.2.1 引言

1. >**两个** 或 **多个集合** 可以以许多不同的方式结合在一起。
2. >令 $A$ 和 $B$ 为集合。集合 $A$ 和 $B$ 的 **并集** ，用 *$A \bigcup B$* 表示，是一个集合，它包含 $A$ **或** $B$ 中或同时在 $A$ 和 $B$ 中的元素。
3. >一个元素 $x$ 属于 $A$ 和 $B$ 的并集当且仅当 $x$ 属于 $A$ 或 $x$ 属于 $B$ 。这说明 *$A \bigcup B = \{x | x \in A \vee x \in B\}$* 。
4. >令 $A$ 和 $B$ 为集合。集合 $A$ 和 $B$ 的 **交集** ，用 *$A \bigcap B$* 表示，是一个集合，它包含同时在 $A$ **和** $B$ 中的那些元素。
5. >一个元素 $x$ 属于 $A$ 和 $B$ 的并集当且仅当 $x$ 属于 $A$ 而且 $x$ 属于 $B$ 。这说明 *$A \bigcap B = \{x | x \in A \wedge x \in B\}$* 。
6. >两个集合称为是 **不相交** 的，如果它们的交集为 **空集** 。
7. >集合的基数为 ：*$|A \bigcup B| = |A| + |B| - |A \bigcap B|$* 。
8. >把集合的 **基数原理** 推广到任意多个集合的交集就是包含 **排斥原理** 或简称 **容斥原理** 。
9. >容斥原理是 **枚举** 中的一项重要的技术。
10. >令 $A$ 和 $B$ 为集合。 $A$ 和 $B$ 的 **差集** ，用 *$A - B$* 表示，是一个集合，它包含 **属于 $A$ 而不属于 $B$ 的元素** 。 $A$ 和 $B$ 的差集也称为 **$B$ 相对于 $A$ 的补集** 。
11. >一个元素属于 $A$ 和 $B$ 的 **差集** 当且仅当 $x \in A$ 且 $x \in B$ 的补集。这说明 $A - B = \{x | x \in A \wedge x \in B\}$ 。
12. >一旦指定 **全集** $U$ ，就可以 **定义集合的补集** 。
13. >令 $U$ 为全集。集合 *$A$* 的补集，用 *$\bar A$* 表示，是 **$A$ 相对于 $U$ 的补集** 。所以，集合 $A$ 的补集是 *$U - A$* 。
14. >一个元素 $x$ 属于 $\bar A$ 当且仅当 $x \notin A$ ，这说明 *$\bar A = \{x | x ]\in U | x \notin A\}$* 。
15. >$A$ 和 $B$ 的 **补集的交集** 来表示 **$A$ 和 $B$ 的差集** 。即 *$A - B = A \bigcap \bar B$* 。

### 2.2.2 集合恒等式

1. >介绍 **证明恒等式的方法** ，是想说明 **对一个问题的求解往往有不同的途径** 。
2. |恒等式|名称|
   |----|----|
   |$A \bigcap B = A$|恒等律|
   |$A \bigcup \emptyset$|恒等律|
   |$A \bigcup U = U$|支配律|
   |$A \bigcap U = U$|支配律|
   |$A \bigcap A = A$|幂等律|
   |$A \bigcup A = A$|幂等律|
   |$\bar (\bar A)$|补律|
   |$A \bigcup (B \bigcup C) = (A \bigcup B) \bigcup C$|结合律|
   |$A \bigcap (B \bigcap C) = (A \bigcap B) \bigcap C$|结合律|
   |$A \bigcup (B \bigcap C) = (A \bigcup B) \bigcap (A \bigcup C)$|分配律|
   |$A \bigcap (B \bigcup C) = (A \bigcap B) \bigcup (A \bigcap C)$|分配律|
   |$\bar (A \bigcap B) = (\bar A) \bigcup (\bar B)$|德·摩根律|
   |$\bar (A \bigcup B) = (\bar A) \bigcap (\bar B)$|德·摩根律|
   |$A \bigcup (A \bigcap B) = A$|吸收律|
   |$A \bigcap (A \bigcup B) = A$|吸收律|
   |$A \bigcup \bar A = U$|互补律|
   |$A \bigcap \bar A = \emptyset$|互补律|

3. >证明集合相等的一种方法是 **证明每一个是另一个的子集** ，可以通过证明 **一个元素如果属于第一个集合，必定属于第二个集合** 。
4. >当通过证明恒等式的一边是另一边的子集的方式来证明涉及两个以上集合的恒等式时，需要 **跟踪一些不同的情形** 。
5. >集合恒等式还可以通过 **成员表** 来证明，用 *$1$* 来表示元素属于一个集合，用 *$0$* 来表示元素不属于一个集合。

### 2.2.3 扩展的并集和交集

1. >由于集合的并集和交集满足 **结合律** ，所以只要 $A$ $B$ $C$ 为集合，则 $A \bigcup B \bigcup C$ 和 $A \bigcap B \bigcap C$ 均有定义，即这样的记号是 **无二义性** 的。
2. >**一组集合的并集** 是包含那些 **至少** 是这组集合中 **一个** 集合成员的元素的集合，用记号 $$A_{1} \bigcup A_{2} \bigcup ··· \bigcup A_{n} = \bigcup^n_{i = 1}$$ 表示集合 $A_{1}$ ， $A_{2}$ ，··· ， $A_{n}$ 的并集。
3. >**一组集合的交集** 是包含那些属于这组集合中 **所有** 集合成员的元素的集合，用记号 $$A_{1} \bigcap A_{2} \bigcap ··· \bigcap A_{n} = \bigcap^n_{i = 1}$$ 表示集合 $A_{1}$ ， $A_{2}$ ，··· ， $A_{n}$ 的交集。
4. >当 *$I$* 是一个集合时，可以用记号 $$\bigcap_{i \in I}$$ 和 $$\bigcup_{i \in I}$$ 分别表示对于 $i \in I$ 的集合 $A_{i}$ 的交集和并集，注意，$$\bigcap_{i \in I}A_{i} = \{x | \forall i \in I(x \in A_{I})\}$$ 和 $$\bigcup_{i \in I}A_{i} = \{x | \exists i \in I(x \in A_{I})\}$$ 。
5. >集合的 **并集** 是 **正整数集** 。

### 2.2.4 集合的计算机表示

1. >计算机 **表示集合的方式** 有多种，一种方法是 **把集合的元素无序地存储起来** ，另一个方法是 **利用全集中元素的任何一种顺序来存放集合的元素** 。
2. >假定全集 $U$ 是有限的，可以用长度为 *$n$* 的位串来表示 $U$ 的子集 $A$ ：其中位串中第 $i$ 位是 $1$ ，如果 $a_{i}$ 属于 $A$ ；若 $a_{i}$ 不属于 $A$ ，则位串的第 $i$ 位是 $0$ 。
3. >用 **位串** 表示集合，便于计算集合的补集、并集、交集和差集。
4. >表示集合的位串计算它的 **补集的位串** ，只需简单地把每个 $1$ 改为 $0$ ，每个 $0$ 改为 $1$ ，因为 $x \in A$ 当且仅当 $x \notin \bar A$ 。
5. > 要想得到两个集合的并集和交集的位串，我们可以对表示这两个集合的 **位串按位** 做 **布尔运算** 。
6. >对两个集合的位串做布尔运算是 ：**只要两个位串的第 $i$ 位有一个是 $1$ ，则并集的位串的第 $i$ 位是 $1$ ，而当两位都是 $0$ 时为 $0$** 。
7. >**并集的位串** 是两个集合位串的 **按位或** 。
8. >对两个集合的位串做布尔运算是 ：**当两个位串的第 $i$ 位均为 $1$ 时，则交集的位串的第 $i$ 位是 $1$ ，否则为 $0$** 。
9. >**交集的位串** 是两个集合位串的 **按位与** 。
10. >集合 $A$ 和 $B$ 的 **对称差** ，用 *$A \bigoplus B$* 表示，是属于 $A$ **或** 属于 $B$ 但 **不同时属于** $A$ 与 $B$ 的元素组成的集合。
11. >$|A \bigcup B \bigcup C| = |A| + |B| + |C| - |A \bigcap B| - |A \bigcap C| - |B \bigcap C| + |A \bigcap B \bigcap C|$ 这是包含 **排斥原理** 的一个特例。
12. >集合的 **后继** 是集合 *$A \bigcup {A}$* 。
13. >有时候一个元素在一个无序集合中 **出现的次数** 也有意义。当同一个元素作为成员可以出现不止一次时，这个无序元素就是 **多重集** 。
14. >**符号 $\{m_{1} · a_{1} ,m_{2} · a_{2} , ··· , m_{r} · a_{r}\}$** 表示的是 $a_{1}$ 出现 $m_{1}$ 次， $a_{2}$ 出现 $m_{2}$ 次等的多重集。**整数 $m_{1}$ 称为 $a_{i}$ 的重数，$i = 1,2,···，r$** 。
15. >令 $P$ 和 $Q$ 为多重集，多重集 $P$ 和 $Q$ 的 **并集** 是多重集，其中每个元素的重数是该元素在 $P$ 和 $Q$ 中的重数的 **最大值** 。
16. >令 $P$ 和 $Q$ 为多重集，多重集 $P$ 和 $Q$ 的 **交集** 是多重集，其中每个元素的重数是该元素在 $P$ 和 $Q$ 中的重数的 **最小值** 。
17. >令 $P$ 和 $Q$ 为多重集，多重集 $P$ 和 $Q$ 的 **差集** 是多重集，其中每个元素的重数是该元素 **在 $P$ 中的重数减去它在 $Q$ 中的重数** ，当然这不能是负数，**如果是负数就以 $0$ 作为重数** 。
18. >令 $P$ 和 $Q$ 为多重集，多重集 $P$ 和 $Q$ 的 **和集** 是多重集，其中每个元素的重数是该元素在 $P$ 和 $Q$ 中的重数的 **和**。
19. >**人工智能** 中使用 **模糊集合** 。
20. >全集 $U$ 中每个元素在模糊集合 $S$ 中都有个 **隶属度** ，即 $0$ 和 $1$ 之间 （包括 $0$ 和 $1$）的实数。
21. >模糊集合 $S$ 的表示法是 **列出元素及其隶属度（隶属度为 $0$ 的元素不列）** 。
22. >模糊集合 $S$ 和 $T$ 的 **并集** 是模糊集合 $S \bigcup T$ ，其中每个元素的隶属度是 **该元素在 $S$ 和 $T$ 中成员度的最大值** 。
23. >模糊集合 $S$ 和 $T$ 的 **交集** 是模糊集合 $S \bigcap T$ ，其中每个元素的隶属度是 **该元素在 $S$ 和 $T$ 中成员度的最小值** 。

%49.
        \begin{practices}
            令 $x = n + m$ ，其中 $n$ 为整数部分， $0 \leq m < 1$ 。
            $\lfloor n + m \rfloor = n, \lceil n + m \rceil = n + 1$ 。
            由不等式性质可得出 $x - 1 < \lfloor x \rfloor \leq x \leq \lceil x \rceil x + 1$ 。
            证毕。
        \end{practices}

%50.
        \begin{practices}
            令 $x = n + l$ ，其中 $n$ 为整数部分， $0 \leq l < 1$ 。
            $\lceil n + l + m \rceil = n + m + 1, \lceil n + l \rceil + m = n + 1 + m$ 。
            证毕。
        \end{practices}

        %51.
        \begin{practices}
            令 $x = m + l$ ，其中 $m$ 为整数部分， $0 \leq l < 1$ 。

            \begin{enumerate}[A.]
                \item
                {
                    如果 $m + l < n$ ，那么 $\lfloor m + l \rfloor = m < n$ 。
                    如果 $\lfloor m + l \rfloor = m < n, x < n$ 。
                }
                \item
                {
                    如果 $n < m + l$ ，那么 $n < m + 1 = \lceil m + l \rceil$ 。
                    如果 $n < \lceil m + l \rceil$ ，那么 $ n \leq m + 1, n < m + l$ 。
                }
            \end{enumerate}
        \end{practices}

%51.
        \begin{practices}
            令 $x = m + l$ ，其中 $m$ 为整数部分， $0 \leq l < 1$ 。

            \begin{enumerate}[A.]
                \item
                {
                    如果 $m + l < n$ ，那么 $\lfloor m + l \rfloor = m < n$ 。
                    如果 $\lfloor m + l \rfloor = m < n, x < n$ 。
                }
                \item
                {
                    如果 $n < m + l$ ，那么 $n < m + 1 = \lceil m + l \rceil$ 。
                    如果 $n < \lceil m + l \rceil$ ，那么 $ n \leq m + 1, n < m + l$ 。
                }
            \end{enumerate}
        \end{practices}

%52.
        \begin{practices}
            \begin{enumerate}[A.]
                \item
                {
                    如果 $m + l \leq n$ ，$\lceil m + l \rceil < m + 1$ ，又因为 $n$ 为整数，所以 $\lceil m + l \rceil \leq n$ 。
                    如果 $\lceil m + l \rceil \leq n$ ，那么 $m + 1 \leq n$ ，所以 $x \leq n$ 。
                }
                \item
                {
                    如果 $n \leq m + l$ ，那么 $n \leq m < \lfloor x \rfloor$ 。
                    如果 $n \leq \lfloor x \rfloor$ ，那么 $n \leq m \leq m + l$ 。
                }
            \end{enumerate}
        \end{practices}

%53.
        \begin{practices}
            如果 $n$ 为偶数，则有 $n = 2k$ ， $\lfloor 2k / 2 \rfloor = k = n / 2$ 。
            如果 $n$ 为奇数，则有 $n = 2k + 1$ ， $\lfloor k + 0.5 \rfloor = k = (n - 1) / 2$ 。
        \end{practices}

        %54.
        \begin{practices}
            令 $x = n + m$ ，其中 $n$ 为整数部分， $0 \leq m < 1$ 。
            则 $-x = -n - m = -n - 1 + (1 - m)$ ，故可证。
        \end{practices}

        %55.
        \begin{practices}
            同上。
        \end{practices}

        %56.
        \begin{practices}
            $\lfloor b \rfloor - \lceil a \rceil + 1$
        \end{practices}

        %57.
        \begin{practices}
            $\lceil b \rceil - \lfloor a \rfloor - 1$
        \end{practices}

        %58.
        \begin{practices}
            \begin{enumerate}[A.]
                \item 1
                \item 2
                \item 63
                \item 375
            \end{enumerate}
        \end{practices}

        %59.
        \begin{practices}
            \begin{enumerate}[A.]
                \item 1
                \item 3
                \item 126
                \item 3600
            \end{enumerate}
        \end{practices}

        %60.
        \begin{practices}
            \begin{enumerate}[A.]
                \item 3018
                \item 7075
                \item 23584
            \end{enumerate}
        \end{practices}

        %61.
        \begin{practices}
            \begin{enumerate}[A.]
                \item 100
                \item 256
                \item 1030
                \item 30200
            \end{enumerate}
        \end{practices}

        %62.
        \begin{practices}

        \end{practices}

        %63.
        \begin{practices}

        \end{practices}

        %64.
        \begin{practices}

        \end{practices}

        %65.
        \begin{practices}

        \end{practices}

        %66.
        \begin{practices}

        \end{practices}

        %67.
        \begin{practices}

        \end{practices}

        %68.
        \begin{practices}

        \end{practices}

        %69.
        \begin{practices}
            \begin{align*}
                f^{-1}(x^3 + 1) &= x \\
                f^{-1}(x) = \sqrt[3]{x - 1}
            \end{align*}
        \end{practices}

 %70.
        \begin{practices}
            \begin{align*}
                ((f \circ g) \circ (g^{-1} \circ f^{-1}))(a)
                &= f(g(g^{-1}(f^{-1}(a)))) \\
                &= f(f^{-1}(a)) \\
                &= a
            \end{align*}

            \begin{align*}
                ((g^{-1} \circ f^{-1}) \circ (f \circ g))(b)
                &= f^{-1}(g^{-1}(g(f(b)))) \\
                &= f^{-1}(f(b)) \\
                &= b
            \end{align*}
        \end{practices}

        %71.
        \begin{practices}
            \begin{enumerate}[A.]
                \item $x \in (A \cap B) \leftrightarrow x \in A \wedge x \in B$
                \item $x \in (A \cup B) \leftrightarrow x \in A \vee x \in B$
                \item $x \in \bar{A} \leftrightarrow x \notin A$
                \item $x \in (A \oplus B) \leftrightarrow (x \in A \wedge x \notin B) \vee (x \notin A \wedge x \in B)$
            \end{enumerate}
        \end{practices}

        %72.
        \begin{practices}
            如果函数是单射，但不是满射，那么基数不会相等。
            如果函数是满射，但不是单射，那么基数不会相等。
            证毕。
        \end{practices}

        %73.
        \begin{practices}
            \begin{enumerate}[A.]
                \item T
                \item F
                \item T
                \item F
                \item F
            \end{enumerate}
        \end{practices}

        %74.
        \begin{practices}
            \begin{enumerate}[A.]
                \item T
                \item F
                \item T
                \item F
                \item T
            \end{enumerate}
        \end{practices}

        %75.
        \begin{practices}
            \begin{enumerate}[A.]
                \item
                {
                    令 $x = n^2 + m + \epsilon$ ， $n^2$ 为小于 $x$ 的最大平方数。
                    $\sqrt{\lfloor x \rfloor}$ 和 $\sqrt{\lfloor n^2 + m \rfloor}$ 都处于 $[n, n+1)$ 之间，故可证。
                }
                \item
                {
                    同上。
                }
            \end{enumerate}
        \end{practices}

        %76.
        \begin{practices}
            令 $x = m + n$ 。
            当 $n < 1 / 3$ 时，左右都等于 $3m$ 。
            当 $1 / 3 \leq n < 2 / 3$ 时，左右都等于 $3m + 1$ 。
            当 $2 / 3 \leq n < 1$ 时，左右都等于 $3m + 2$ 。
        \end{practices}

        %77.
        \begin{practices}
            \begin{enumerate}[A.]
                \item $n \neq 0$
                \item T
                \item $n \neq 0$
                \item T
                \item $m > n$
            \end{enumerate}
        \end{practices}

        %78.
        \begin{practices}
            \begin{enumerate}[A.]
                \item
                {
                    良定义。
                }
                \item
                {
                    见例77。
                }
            \end{enumerate}
        \end{practices}

        %79.
        \begin{practices}
            \begin{enumerate}[A.]
                \item
                {
                    根据题意， $S$ 具有 $m$ 个元素，将第一个元素指派到 $1$ ，第二个指派到 $2$ ， $...$ 第 $m$ 个元素指派到 $m$ 。
                }
                \item
                {
                    同上。
                }
            \end{enumerate}
        \end{practices}

        %80.
        \begin{practices}
            如果 $S$ 为有限集，则真子集 $A$ 与 $S$ 基数不同，不可能存在一一对应关系。
        \end{practices}
