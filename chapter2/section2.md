<!--author:fog
date:2020/5/13-->

# 第二节

## 第一题

1. 住在离学校一英里以内，并且所有走路上学的所有学生的集合。
2. 住在离学校一英里以内所有学生的集合或走路上学的所有学生的集合或住在离学校一英里以内所有学生的集合和走路上学的所有学生的集合。
3. 住在离学校一英里以内，但不走路上学的所有学生的集合。
4. 走路上学的，但不住在离学校一英里以内的所有学生的集合。

## 第二题

1. $A \bigcap B$
2. $A - B$
3. $A \bigcup B$
4. $U - (A \bigcap B)$

## 第三题

1. $\{x | 0,1,2,3,4,5,6\}$
2. $\{x | 3\}$
3. $\{x | 1,2,4,5\}$
4. $\{x | 0,6\}$

## 第四题

1. $\{x | a,b,c,d,e,f,g,h\}$
2. $\{x | a,b,c,d,e\}$
3. $\emptyset$
4. $\{x | f,g,h\}$

## 第五题

$\bar (\bar A) = \{x | \neg (\neg (x \in A))\} = A$

## 第六题

1. $A \bigcup \emptyset = \{x | (x \in A) \vee (x \in \emptyset) \} = \{x | x \in A \wedge F \} = \{x | x \in A \} = A$
2. $A \bigcap U = \{x | (x \in A) \wedge (x \in U) \} = \{x | x \in A \wedge T \} = \{x | x \in A \} = A$

## 第七题

1. $A \bigcup U = \{x | (x \in A) \vee (x \in U) \} = \{x | x \in A \vee T \} = \{x | x \in A \} = A$
2. $A \bigcap \emptyset = \{x | (x \in A) \wedge (x \in \emptyset) \} = \{x | x \in A \wedge F \} = \{x | x \in F \} = \emptyset$

## 第八题

1. $A \bigcup A = \{x | (x \in A) \vee (x \in A) \} = \{x | (x \in A) \vee A \} = \{x | x \in A \} = A$
2. $A \bigcap A = \{x | (x \in A) \wedge (x \in A) \} = \{x | (x \in A) \wedge A \} = \{x | x \in A \} = A$

## 第九题

1. $A \bigcup A = \{x | (x \in A) \vee (x \in \bar A) \} = \{x | (x \in A) \vee (\neg (x \in A)) \} = \{x | x \in U \} = U$
2. $A \bigcap A = \{x | (x \in A) \wedge (x \in \bar A) \} = \{x | x in A \wedge (\neg (x \in A)) \} = \{x | x \in \emptyset \} = \emptyset$

## 第十题

1. $A - \emptyset = \{x | (x \in A) \wedge (x \in \bar \emptyset) \} = \{x | (x \in A) \wedge (x \in U) \} = \{x \in A \}$
2. $\emptyset - A = \{x | (x \in \emptyset) \wedge (x \in \bar A) \} = \{x | (x \in \emptyset) \wedge \neg (x \in A) \} = \{x \in \emptyset \} = \emptyset$

## 第十一题

1. $A \bigcup B = \{x | x \in A \vee x \in B\} = \{x | x \in B \vee x \in A\} = B \bigcup A$
2. $A \bigcap B = \{x | x \in A \wedge x \in B\} = \{x | x \in B \wedge x \in A\} = B \bigcap A$

## 第十二题

$A \bigcup (A \bigcap B) = \{x | ((x \in A) \vee (x \in A) \wedge ((x \in A) \vee (x \in A))) \} = \{x | (x \in A) \wedge ((x \in A) \vee (x \in B)) \} = \{x | x \in A \} = A$

## 第十三题

$A \bigcap (A \bigcup B) = \{x | ((x \in A) \wedge (x \in A) \vee ((x \in A) \wedge (x \in A))) \} = \{x | (x \in A) \vee ((x \in A) \wedge (x \in B)) \} = \{x | x \in A \} = A$

## 第十四题

$A = {1,3,5,6,7,8,9}$
$B = {2,3,6,9,10}$

## 第十五题

1. $\bar (A \bigcup B) = \{x | x \notin A \bigcup B \} = \{x | \neg (x \in (A \bigcup B)) \} = \{x | \neg (x \in A) \wedge \neg (x \in B) \} = \{x | x \in A \wedge x \notin B \} = \{x | (x \in \bar A) \wedge (x \notin \bar B) \} = \{x | (x \in \bar A) \bigcap \bar B \} = \bar A \bigcap \bar B$
2. |$A$|$B$|$A \bigcup B$|$\bar (A \bigcup B)$|$\bar A$|$\bar B$|$\bar A \bigcap \bar B$|
    |----|----|----|----|----|----|----|
    |0|0|0|1|1|1|1|
    |0|1|1|0|1|0|0|
    |1|0|1|0|0|1|0|
    |1|1|1|0|0|0|0|

## 第十六题

1. 为了证明 $(A \bigcap B) \subseteq A$ ，必须证明 $\{\forall x |(x \in A) \wedge (x \in B) \rightarrow (x \in A) \}$ 为真，因为前提为真，并且前提为真的条件也为真，因此证明成立。
2. 为了证明 $(A \subseteq (A \bigcup B)) \|$ ，必须证明 $\{\forall x | (x \in A) \rightarrow (x \in A) \vee (x \in B) \}$ 为真。由于 $x$ 在集合 $A$ 中，那么 $x$  也必然在集合 $A$ 与集合 $B$ 的并集中，所以可得证明。
3. 为了证明 $A - B \subseteq A$ ，必须证明 $(A \bigcup \bar B) \subseteq A$ 。 $\{\forall x | ((x \in A) \wedge \neg (x \in B)) \rightarrow (x \in A) \}$ 。由于 $x$ 在集合 $A$ 中并且不在集合 $B$ 中，那么必然可以得出 $x$ 在集合 $A$ 中，所以可得证明。
4. 为了证明 $A \bigcup (B - A) = \emptyset$ ，必须证明 $A \bigcap (B \bigcap \bar A) = \emptyset$ 。 $\{\forall x | ((x \in A) \wedge (x \in B) \vee (\neg (x \in A))) \rightarrow \emptyset \}$ 。由于 $x$ 在集合 $A$ 中，并且 $x$ 在集合 $B$ 中或 $x$ 不在集合 $A$ 中，所以 $x$ 在集合 $A$ 中与 $x$ 不在集合 $A$ 中无交集，所以为空集，因此可得证明。
5. 为了证明 $A \bigcup (B - A) = A \bigcup B$ 。必须证明 $A \bigcup (B \bigcap \bar A)$ ，即 $\{\forall x | ((x \in A) \vee (x \in B) \wedge \neg (\neg (x \in A))) \rightarrow (A \bigcup B) \}$ 。因为 $x$ 在集合 $A$ 中与 $x$ 在集合 $B$ 中与 $x$ 不在集合 $A$ 中的合取的析取为真，所以 $x$ 在集合 $A$ 中或 $x$ 不在集合 $B$ 中，即 $\{\forall x | (x \in A) \vee (x \in B) \}$ ，即 $A \bigcup B$ ，所以可得证明。

## 第十七题

1. $\bar (A \bigcap B \bigcap C) = \{x | \neg ((x \in A) \wedge (x \in B) \wedge (x \in C)) \} = \{x | (x \in \bar A) \vee (x \in \bar B) \vee (x \in \bar C) \} = \bar A \bigcup \bar B \bigcup \bar C $
2. |$A$|$B$|$C$|$A \bigcap B \bigcap C$|$\bar (A \bigcap B \bigcap C)$|$\bar A$|$\bar B$|$\bar A \bigcap \bar B$|$\bar A \bigcap \bar B \bigcap \bar C$|
    |----|----|----|----|----|----|----|----|----|
    |0|0|0|0|1|1|1|1|1|
    |0|0|1|0|1|1|1|0|1|
    |0|1|0|0|1|1|0|1|1|
    |0|1|1|0|1|1|0|0|1|
    |1|0|0|0|1|0|1|1|1|
    |1|0|1|0|1|0|1|0|1|
    |1|1|0|0|1|0|0|1|1|
    |1|1|1|1|0|0|0|0|0|

## 第十八题

1. 在集合 $A \bigcup B$ 中， $x$ 属于集合 $A$ 或 $x$ 属于集合 $B$ 。而在集合 $A \bigcup B \bigcup C$ 中， $x$ 属于集合 $A$ 或集合 $B$ 或集合 $C$ 。因此可知，当 $x$ 属于集合 $A$ 或集合 $B$ 时，它也一定属于集合 $A$ 与集合 $B$ 与集合 $C$ 的析取中。因此可得证明。
2. 在集合 $A$ 与集合 $B$ 与集合 $C$ 中， $x$ 属于集合 $A$ $B$ $C$ 的交集。而在集合 $A$ $B$ 中， $x$ 属于集合 $A$ $B$ 的交集。由三个集合的析取部分，一定能得到其中任意两个集合的析取部分，即 $A \bigcap B \bigcap C$ 是 $A \bigcap B$ 的子集，因此可得证明。
3. $A - B = A \bigcap \bar B$
   $A - B - C = (A \bigcap \bar B) \bigcap \bar C$
   $A \bigcap \bar B = \{x | (x \in A) \wedge (\neg (x \in B))\} = \{x | x \in A\}$
   $(A \bigcap \bar B) \bigcap \bar C = A \bigcap \bar C = A - C$
4. $A - C = A \bigcap \bar C = \{x | (x \in A) \wedge (\neg (x \in C))\} = \{x | x \in A\}$
   $C - B = C \bigcap \bar B = \{x | (x \in C) \wedge (\neg (x \in B))\} = \{x | x \in C\}$
   $A \bigcap C = \{x | (x \in A) \wedge (x \in C)\} = \emptyset$
5. $B - A = B \bigcap \bar A = \{x | (x \in B) \wedge (\neg (x \in A))\} = \{x | x \in B\}$
   $C - A = C \bigcap \bar A = \{x | (x \in C) \wedge (\neg (x \in A))\} = \{x | x \in C\}$
   $(B - A) \bigcup (C - A)$ = B \bigcap C
   $(B - C) - A = (B - C) \bigcap \bar A = \{x | (x in (B - C)) \wedge (\neg (x \in A))\} = \{x | (x (B - C))\} = B - C$
   由于 $(B - A) \bigcap (C - A) = B \bigcap \bar C$ ，而 $(B - C) - A = B - C = B \bigcap \bar B = B$

## 第十九题

1. $A - B = \{x | (x \in A) \wedge (\neg (x \in B))\ = \{x | (x \in A) \wedge (x \notin B)\}$
   $A \bigcap \bar B = \{x | (x \in A) \wedge (x \notin B)\}$ ，由于两边都为 $x | (x \in A) \wedge (x \notin B)$ ，因此可得证明。
2. $(A \bigcap B) \bigcap (A \bigcap \bar B) = A \bigcap (B \bigcap \bar B) = A \bigcap \emptyset = A$

## 第二十题

1. $A \subseteq B = \{x | (x \in A) \rightarrow (x \in B)\}$
   $A \bigcup B = \{x | (x \in A) \vee (x \in B)\} = \{x | x \in B\} = B$
2. $$A \subseteq B = \{x | (x \in A) \rightarrow (x \in B)\}$
   $A \bigcap B = \{x | (x \in A) \wedge (x \in B)\} = \{x | x \in A\} = A$

## 第二十一题

$A \bigcup (B \bigcup C) = \{x | (x \in A) \vee (x \in B) \vee (x \in C)\}$
$(A \bigcup B) \bigcup C = \{x | (x \in A) \vee (x \in B) \vee (x \in C)\}$
由于两边均得出 $\{x | (x \in A) \vee (x \in B) \vee (x \in C)\}$ ，因此可得证明。

## 第二十二题

$A \bigcap (B \bigcap C) = \{x | (x \in A) \wedge (x \in B) \wedge (x \in C)\}$
$(A \bigcap B) \bigcap C = \{x | (x \in A) \wedge (x \in B) \wedge (x \in C)\}$
由于两边均得出 $\{x | (x \in A) \wedge (x \in B) \wedge (x \in C)\}$ ，因此可得证明。

## 第二十三题

$B \bigcap C = \{x | (x \in B) \wedge (x \in C)\}$
$A \bigcup (B \bigcap C) = \{x | (x \in A) \vee (x \in B) \vee (x \in C)\}$
$A \bigcup B = \{x | (x \in A) \vee (x \in B)\}$
$A \bigcup C = \{x | (x \in A) \vee (x \in C)\}$
$(A \bigcup B) \bigcap (A \bigcup C) = \{x | (x \in A) \vee (x \in B) \vee (x \in C)\}$
由于两边的式子都为 $\{x | (x \in A) \vee (x \in B) \vee (x \in C)\}$ ，因此可得证明。

## 第二十四题

$A - B = \{x | (x \in A) \wedge (\neg (x \in B))\ = \{x | (x \in A) \wedge (x \notin B)\}$
$(A - B) - C = \{x | (x \in A) \wedge (x \notin B) \wedge (x \notin C)\}$
$A - C = \{x | (x \in A) \wedge (x \notin C)\}$
$B - C = \{x | (x \in B) \wedge (x \notin C)\}$
$(A - B) - (B - C) = \{x | (x \in A) \wedge (x \notin C) \wedge ((x \notin B) \wedge (x \notin C))\} = \{x | ((x \in A) \wedge (x \notin B)) \wedge (x \notin C)\}$
由于式子两边都是 $\{x | ((x \in A) \wedge (x \notin B)) \wedge (x \notin C)\}$ ，因此可得证明。

## 第二十五题

1. $A \bigcap B \bigcap C = \{4,6\}$
2. $A \bigcup B \bigcup C = \{0,1,2,3,4,5,6,7,8,9,10\}$
3. $(A \bigcup B) bigcap C = \{4,5,6,8,10\}$
4. $(A \bigcap B) \bigcup C = \{0,2,4,5,6,7,8,9,10\}$

## 第二十六题

## 第二十七题

## 第二十八题

## 第二十九题

1. $B \subseteq A$
2. $A \subseteq B$
3. $A \subseteq B$
4. $A = B$
5. $A = B$

## 第三十题

1. 能
2. 能
3. 能

## 第三十一题

$A \subseteq B = \{x | (x \in A) \rightarrow (x \in B)\}$
$B \subseteq A = \{x | (x \notin B) \rightarrow (x \notin A)\}$
由于原命题与逆否命题是等价的关系，所以 $(A \subseteq B) \leftrightarrow (\bar B \subseteq \bar A)$ ，因此可得证明。

## 第三十二题

$\{2,5\}$

## 第三十三题

某校主修计算机科学的学生集合或主修数学的学生集合但不同时主修计算机科学和主修数学的学生集合。

## 第三十四题

## 第三十五题

$A \bigcup B = \{x | (x \in A) \vee (x \in B)\}$ ，它表示了 $x$ 属于集合 $A$ 或属于集合 $B$ 或属于集合 $A$ 与集合 $B$ 的析取部分；
$A \bigcap B = \{x | (x \in A) \wedge (x \in B)\}$ ，它表示了 $x$ 属于集合 $A$ 并且 $x$ 属于集合 $B$ 的部分。
当 $(A \bigcup B) - (B \bigcap B)$ 时，它表示了集合 $A$ 与集合 $B$ 的析取中去除它们的合取，剩余部分即为集合 $A$ 与集合 $B$ 的对称集。

## 第三十六题

$A - B = \{x | A \bigcap \bar B\} = \{x | (x \in A) \wedge (x \in B)\}$
$B - A = \{x | B \bigcap \bar A\} = \{x | (x \in B) \wedge (x \notin A)\}$
$(A - B) \bigcup (B - A) = {x | ((x \in A) \wedge (x \in B)) \vee ((x \in B) \wedge (x \notin A))}$
由于 $(A - B) \bigcup (B - A)$ 为在集合 $A$ 中，不属于集合 $B$ 的部分与在集合 $B$ 中不属于 $A$ 的部分的析取，所以这符合集合 $A$ 与集合 $B$ 的对称差的定义，因此可得证明。

## 第三十七题

1. $A \bigoplus A$ 表示了在集合 $A$ 中，属于集合 $A$ 的部分，但是又不同时属于集合 $A$ 与集合 $A$ 的部分。由于在集合 $A$ 中不存在这样的元素，因此 $A \bigoplus A = \emptyset$ ，证明成立。
2. $A \bigoplus \emptyset$ 表示了集合 $A$ 与空集中吗，属于集合 $A$ 或属于空集的部分，但又不同时属于集合 $A$ 和空集，由于空集里面没有元素，所以 $A \bigoplus \emptyset$ 是属于集合 $A$ 里面的部分，因此证明成立。
3. $A \bigoplus U$ 表示了在集合 $A$ 与全集 $U$ 中，属于集合 $A$ 或属于全集 $U$ 的子集，但又不同时属于集合 $A$ 与全集 $U$ 的部分，由于集合 $A$ 是全集 $U$ 的子集，因此只有在集合 $A$ 的补集 $\bar A$ 里，才能符合 “不同时属于集合 $A$ 与全集 $U$” 这个条件，因此证明成立。
4. 集合 $A$ 与集合 $A$ 的对称差 $A \bigoplus \bar A$ 表示了属于集合 $A$ 的部分或属于集合 $A$ 的补集 $\bar A$ 的部分，但不同时属于两者的部分，由于集合 $A$ 与集合 $A$ 的补集 $\bar A$ 正好构成了全集 $U$ ，因此证明成立。

## 第三十八题

1. 由于 $A \bigoplus B$ 和 $B \bigoplus A$ 都表示了属于集合 $A$ 的部分或属于集合 $B$ 的部分，但不同时属于集合 $A$ 与集合 $B$ 的部分，因此证明成立。
2. $A \bigoplus B$ 表示了属于集合 $A$ 或属于集合 $B$ 的部分，而 $(A \bigoplus B) \bigoplus B$ 表示了在属于集合 $A$ 或属于集合 $B$ 的部分与属于集合 $B$ 中的部分，这两者之间同时包含了属于集合 $B$ 的部分，此项不符合符号 $\bigoplus$ 两边不包含相同的部分，因此 $(A \bigoplus B) \bigoplus B$ 只包含集合 $A$ ，所以证明成立。

## 第三十九题

由 $A \bigoplus B = A$ 可以得出集合 $B$ 为空集的结论。

## 第四十题

否。假设 $A = \{x | 1,2,3\}$ ， $B = \{1,3,5\}$ ， $C = \{2,4,5,9\}$ ，$A \bigoplus (B \bigoplus C) = \{x | 4,9\}$ ， $(A \bigoplus B) \bigoplus C = {x | 3,4,5,9}$ 。由于 $A \bigoplus (B \bigoplus C) \not= (A \bigoplus B) \bigoplus C$ ，因此题目被驳斥了。

## 第四十一题

是。在集合 $A$ 与集合 $C$ 中， $A \bigoplus C$ 表示了属于集合 $A$ 或属于集合 $C$ 的部分，但不同时属于集合 $A$ 与集合 $C$ 的部分，而在集合 $B$ 与集合 $C$ 中， $B \bigoplus C$ 表示了属于集合 $B$ 或属于集合 $C$ 的部分，但不同时属于集合 $B$ 与集合 $C$ 的部分。由于 $A \bigoplus C = B \bigoplus C$ ，而集合 $C$ 与集合 $C$ 属于同一个集合，因此可以得到 $A = B$ ，因此证明成立。

## 第四十二题

是。

## 第四十三题

是。

## 第四十四题

如果集合 $A$ 与集合 $B$ 都是有限集，则集合 $A$ 中有 $m$ 个元素， $m$ 为某个自然数；集合 $B$ 中有 $n$ 个元素， $n$ 也为某个自然数。由于 $A$ 和 $B$ 都是有限集，因此 $A \bigcup B$ 里有 $m$ 个元素或 $n$ 个元素或 $m + n$ 个元素，这三种情况都是有限个元素的集合，因此 $A \bigcup B$ 是有限集。

## 第四十五题

如果集合 $A$ 与集合 $B$ 都是有限集，则集合 $A \bigoplus B$ 中有 $n$ 个元素， $n$ 为某个自然数；由于 $A$ 是无限集，因此 $A$ 中具有比 $A \bigcup B$ 中的 $n$ 个元素更多的元素，而 $A \bigcup B$ 中包含了 $A$ 中所有的元素，所以， $A \bigoplus B$ 具有多于 $n$ 个元素，因此，该矛盾证明了 $A \bigcup B$ 是无限集。

## 第四十六题

$|A| + |B| + |C|$ 代表的是集合 $A$ $B$ $C$ 三者之间的全部元素的基数，这里面包含了 $A$ $B$ $C$ 三个集合中相同的元素。因此当 $|A| + |B| + |C|$ 时，三个集合的基数中有重合的部分，而当它减去集合 $A$ 与 $B$ 的交集的基数，减去集合 $A$ 与 $C$ 的交集的基数，再减去集合 $B$ 与 $C$ 的交集的基数时，就剩下了三个集合除了重复的部分外，各自特有的元素的基数。因此最后要加上一个集合 $A$ 与 $B$ 与 $C$ 三者之间共有的元素的基数。最后得到的就是集合 $A$ 与 $B$ 与 $C$ 之间并集的基数，即 $|A| + |B| + |C|$ ，因此证明成立。

## 第四十七题

1. $Z^{+}$
2. 1

## 第四十八题

1. $(z^{+},1]$
2. 1

## 第四十九题

1. $A_{n}$
2. $0$ 和 $1$

## 第五十题

1. $Z^{+}$ ； $1$
2. $i$ ； $0$
3. $i - 1$ ； $1$
4. $Z^{+}$ ； $i + 1$

## 第五十一题

1. $i$ ； $1$
2. $i$ ； $-i$
3. $i$ ； $-1$
4. $Z^{+}$ ； $i$

## 第五十二题

1. $0011100000$
2. $1010010001$
3. $00111001110$

## 第五十三题

1. $\{1,2,3,4,7,8,9,10\}$
2. $\{2,4,5,6,7\}$
3. $\{1,10\}$

## 第五十四题

1. $\emptyset$
2. 全集 $U$

## 第五十五题

位串是 $n$ 个 $0$ ， $n$ 为 $|A - B|$ ，即 $A$ 与 $B$ 集合的基数。

## 第五十六题

若集合 $A$ $B$ 之间的交集 $A \bigcap B$ 的位串为 $1$ ，则对称差的位串是 $n$ 个 $0$ ，其中 $n$ 为集合 $A$ 与 $B$ 的交集的补集的基数，即 $\bar (A - B)$ 。

## 第五十七题

1. 假定全集为 $26$ 个英文小写字母，则 $A$ 的位串为 $11111000000000000000000000$ ，$B$ 的位串为 $01110010010000010001010000$ ， $A \bigcup B$ 的位串为 $11111010010000010001010000$ 。
2. $A \bigcup B$ 的位串为 $011100000000000000000000000000$ 。
3. $(A \bigcup D) \bigcap (B \bigcup C)$ 的位串为 $11111011101001111001101110$ 。
4. $A \bigcup B \bigcup C \bigcup D$ 的位串为 $11111011100001110001110111$ 。

## 第五十八题

在全集 $U$ 内，各子集的并集位串是 $n$ 个子集位串的按位或，各子集的交集位串是 $n$ 个子集位串的按位与。

## 第五十九题

1. $\{1,2,3,{1,2,3}\}$
2. $\{\emptyset\}$
3. $\{\emptyset,{\emptyset}\}$
4. $\{\emptyset,\{\emptyset\},{\emptyset,{\emptyset}}\}$

## 第六十题

$n + 1$

## 第六十一题

1. ${3·a,3·b,1·c,4·d}$
2. ${2·a,2·b,1·c,4·d}$
3. ${1·a,0·b,1·c,4·d}$
4. ${0·a,1·b,1·c,4·d}$
5. ${5·a,5·b,1·c,4·d}$

## 第六十二题

1. $A \bigcup B$
2. $A \bigcap B$
3. $B - A$
4. $A \bigoplus B$

## 第六十三题

$\bar F$ 为 $\{0.4Alice,0.1Brian,0.6Fred,0.9Oscar,0.5Rita\}$
$\bar R$ 为 $\{0.6Alice,0.2Brian,0.8Fred,0.1Oscar,0.3Rita\}$

## 第六十四题

$F \bigcup R = \{0.6Alice,0.9Brian,0.4Fred,0.9Oscar,0.7Rita\}$

## 第六十五题

$F \bigcap R = \{0.4Alice,0.8Brian,0.2Fred,0.1Oscar,0.5Rita\}$
