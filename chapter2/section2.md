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
