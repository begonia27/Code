# 第三节

## 第一题

* a.$p \wedge T \equiv p$
  |$p$|$T$|$p \wedge T$|
  |----|----|----|
  |0|1|0|
  |1|1|1|

* b.$p \vee F \equiv p$
  |$p$|$F$|$p \vee F$|
  |----|----|----|
  |0|0|0|
  |1|0|1|

* c.$p \wedge F \equiv F$
  |$p$|$F$|$p \wedge F$|
  |----|----|----|
  |0|0|0|
  |1|0|0|

* d.$p \vee T \equiv T$
  |$p$|$T$|$p \vee T$|
  |----|----|----|
  |0|1|1|
  |1|1|1|

* e.$p \vee p \equiv p$
  |$p$|$p$|$p \vee p$|
  |----|----|----|
  |0|0|0|
  |1|1|1|

* f.$p \wedge p \equiv p$
  |$p$|$p$|$p \wedge p$|
  |----|----|----|
  |0|0|0|
  |1|1|1|

## 第二题

* 证明$\neg (\neg p)$和$p$是逻辑等价的
  |$p$|$\neg p$|$\neg (\neg p)$|
  |----|----|----|
  |0|1|0|
  |1|0|1|

## 第三题

* a.$p \vee q \equiv q \vee p$
  |$p$|$q$|$p \vee q$|$q \vee p$|
  |----|----|----|----|
  |0|0|0|0|
  |0|1|1|1|
  |1|0|1|1|
  |1|1|1|1|

* b.$p \wedge q \equiv q \wedge p$
  |$p$|$q$|$p \wedge q$|$q \wedge p$|
  |----|----|----|----|
  |0|0|0|0|
  |0|1|0|0|
  |1|0|0|0|
  |1|1|1|1|

## 第四题

* a.$(p \vee q) \vee r \equiv p \vee (q \vee r)$
  |$p$|$q$|$r$|$p \vee q$|$(p \vee q) \vee r$|$q \vee r$|$p \vee (q \vee r)$|
  |----|----|----|----|----|-----|----|
  |0|0|0|0|0|0|0|
  |0|0|1|0|1|1|1|
  |0|1|0|1|1|1|1|
  |0|1|1|1|1|1|1|
  |1|0|0|1|1|0|1|
  |1|0|1|1|1|1|1|
  |1|1|0|1|1|1|1|
  |1|1|1|1|1|1|1|

* b.$(p \wedge q) \wedge r \equiv p \wedge (q \wedge r)$
  |$p$|$q$|$r$|$p \wedge q$|$(p \wedge q) \wedge r$|$q \wedge r$|$p \wedge (q \wedge r)$|
  |----|----|----|----|----|-----|----|
  |0|0|0|0|0|0|0|
  |0|0|1|0|0|0|0|
  |0|1|0|0|0|0|0|
  |0|1|1|0|0|1|0|
  |1|0|0|0|0|0|0|
  |1|0|1|0|0|0|0|
  |1|1|0|1|0|0|0|
  |1|1|1|1|1|1|1|

## 第五题

* a.$p \wedge (q \vee r) \equiv (p \wedge q) \vee (p \wedge r)$
  |$p$|$q$|$r$|$q \vee r$|$p \wedge (q \vee r)$|$p \wedge q$|$p \wedge r$|$(p \wedge q) \vee (p \wedge r)$|
  |----|----|----|----|----|----|----|----|
  |0|0|0|0|0|0|0|0|
  |0|0|1|1|0|0|0|0|
  |0|1|0|1|0|0|0|0|
  |0|1|1|1|0|0|0|0|
  |1|0|0|0|0|0|0|0|
  |1|0|1|0|1|0|1|1|
  |1|1|0|1|1|1|0|1|
  |1|1|1|1|1|1|1|1|

## 第六题

* $\neg (p \wedge q) \equiv \neg p \vee \neg q$
  |$p$|$q$|$p \wedge q$|$\neg (p \wedge q)$|$\neg p$|$\neg q$|$\neg p \vee \neg q$|
  |----|----|----|----|----|----|----|
  |0|0|0|1|1|1|1|
  |0|1|0|1|1|0|1|
  |1|0|0|1|0|1|1|
  |1|1|1|0|0|0|0|

## 第七题

* a.$令Jan是富裕的为p$,$令Jan是快乐的为q$.
则$Jan$是富裕的，并且是快乐的可以写作$p \wedge q$,用摩根第一定律，$\neg (p \wedge q)$等价于$\neg p \vee \neg q$.因此命题的否定为$Jan是不富裕的，或者Jan是不快乐的$

* b.$令Carlos明天骑自行车为p,令Carlos跑步为q$。
则$Carlos$明天骑自行车或者跑步可以写作$p \vee q$,用摩根第二定律，$\neg (p \vee q)$等价于$\neg p \wedge \neg q$.因此命题的否定为$Carlos明天不骑自行车并且明天不跑步$

* c.$令Mei步行去上课为p$,$令Mei乘公共汽车去上课为q$.
则$Mei步行或乘公共汽车去上课可以写作p \vee q$。用摩根第二定律，$\neg (p \vee q)$等价于$\neg p \wedge \neg q$.因此命题的否定为$Mei不步行去上课并且不乘共公共汽车去上课$

* d.$令Ibrahim聪明为p，令Ibrahim用功为q$
则$Ibrahim既聪明又用功为p \vee q$.用摩根第一定律，$\neg (p \wedge q)$等价于$\neg p \vee \neg q$.因此命题的否定为$Ibrahim不聪明或者Ibrahim不用功$

## 第八题

* a.令Kwame将在工业界找一份工作为$p$，令去研究生院读书为$q$，则Kwame将在工业界找一份工作或者去研究生院读书可以写作$p \vee q$，用摩根第二定律，$\neg (p \vee q) \equiv \neg p \wedge \neg q$.因此命题的否定为Kwame将不在工业界找一份工作，并且也不去研究生院读书。

* b.令Yoshiko掌握Java为$p$,令Yoshiko掌握微积分为$q$。则Yoshiko掌握Java和微积分为$p \wedge q$,用摩根第一定律，$\neg (p \wedge q) \equiv \neg p \vee \neg q$.因此命题的否定为Yoshiko没有掌握Java，或者Yoshiko没有掌握微积分。

* c.令James年轻为$p$,令James强壮为$q$.则James年轻并且强壮可以写作$p \wedge q$,用摩根第一定律，$\neg (p \wedge q) \equiv \neg p \vee \neg q$.因此命题的否定为James不年轻或者James不强壮。

* d.令Rita将搬到俄勒冈州为$p$,令Rita将搬到华盛顿为$q$，则Rita将搬到俄勒冈州或华盛顿去可以写作$p \vee q$,用摩根第二定律，$\neg (p \vee q) \equiv \neg p \wedge \neg q$.因此命题的否定可以写作Rita不会搬到俄勒冈州和不会搬到华盛顿去。

## 第九题

* a.$(p \wedge q) \rightarrow p$
  |$p$|$q$|$p \wedge q$|$(p \wedge q) \rightarrow p$|
  |----|----|----|----|
  |0|0|0|1|
  |0|1|0|1|
  |1|0|0|1|
  |1|1|1|1|

* b.$p \rightarrow (p \vee q)$
  |$p$|$q$|$p \vee q$|$p \rightarrow (p \vee q)$|
  |----|----|----|----|
  |0|0|0|1|
  |0|1|0|1|
  |1|0|1|1|
  |1|1|1|1|

* c.$\neg p \rightarrow (p \vee q)$
  |$p$|$q$|$\neg p$|$p \rightarrow q$|$\neg p \rightarrow (p \rightarrow q)$|
  |----|----|----|----|----|
  |0|0|1|1|1|
  |0|1|1|1|1|
  |1|0|0|0|1|
  |1|1|0|1|1|

* d.$(p \wedge q) \rightarrow (p \rightarrow q)$
  |$p$|$q$|$p \wedge q$|$p \rightarrow q$|$(p \wedge q) \rightarrow (p \rightarrow q)$|
  |----|----|----|----|----|
  |0|0|0|1|1|
  |0|1|0|1|1|
  |1|0|0|0|1|
  |1|1|1|1|1|
  
* e.$\neg (p \rightarrow q) \rightarrow p$
  |$p$|$q$|$p \rightarrow q$|$\neg (p \rightarrow q)$|$\neg (p \rightarrow q) \rightarrow p$|
  |----|----|----|----|----|
  |0|0|1|0|1|
  |0|1|1|0|1|
  |1|0|0|1|1|
  |1|1|1|0|1|

* f.$\neg (p \rightarrow q) \rightarrow \neg p$
  |$p$|$q$|$p \rightarrow q$|$\neg (p \rightarrow q)$|$\neg q$|$\neg (p \rightarrow q) \rightarrow \neg p$|
  |----|----|----|----|----|----|
  |0|0|0|1|1|1|
  |0|1|1|0|0|1|
  |1|0|0|1|1|1|
  |1|1|1|0|0|1|

## 第十题

* a.$[\neg p \wedge (p \vee q)] \rightarrow q$
  |$p$|$q$|$p \vee q$|$\neg p$|$\neg p \wedge (p \vee q)$|$[\neg p \wedge (p \vee q) ] \rightarrow q$|
  |----|----|----|----|----|----|
  |0|0|0|1|0|0|
  |0|1|1|1|1|1|
  |1|0|1|0|0|1|
  |1|1|1|0|0|1|

* b.$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r)$
  |$p$|$q$|$r$|$p \rightarrow q$|$q \rightarrow r$|$p \rightarrow r$|$(p \rightarrow q) \wedge (q \rightarrow r)$|$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r)$
  |----|----|----|----|----|----|----|----|
  |0|0|0|0|0|0|0|1|
  |0|0|1|0|1|1|0|1|
  |0|1|0|1|1|0|0|0|
  |0|1|1|1|1|1|1|1|
  |1|0|0|0|1|0|0|1|
  |1|0|1|0|1|1|0|1|
  |1|1|0|1|0|0|0|1|
  |1|1|1|1|1|1|1|1|
  