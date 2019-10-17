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
  
* c.$[p \wedge (p \rightarrow q)] \rightarrow q$
  |$p$|$q$|$p \rightarrow q$|$p \wedge (p \rightarrow q)$|$[p \wedge (p \rightarrow q)] \rightarrow q$|
  |----|----|----|----|----|
  |0|0|1|0|1|
  |0|1|1|0|1|
  |1|0|0|0|1|
  |1|1|1|1|1|

* d.$[(p \vee q)\wedge (p \rightarrow r) \wedge (q \rightarrow r)] \rightarrow r$
  |$p$|$q$|$r$|$p \vee q$|$p \rightarrow r$|$q \rightarrow r$|$(p \vee q) \wedge (p \rightarrow r)$|$[(p \vee q) \wedge (p \rightarrow r) \wedge (q \rightarrow r)]$|$[(p \vee q) \wedge (p \rightarrow r) \wedge (q \rightarrow r)] \rightarrow r$|
  |----|----|----|----|----|----|----|----|----|
  |0|0|0|0|1|1|0|0|1|
  |0|0|1|0|1|1|0|0|1|
  |0|1|0|0|0|0|0|0|1|
  |0|1|1|0|1|1|0|0|1|
  |1|0|0|0|0|1|0|0|1|
  |1|0|1|0|1|1|0|0|1|
  |1|1|0|1|0|0|0|0|1|
  |1|1|1|1|1|1|1|1|1|

## 第十一题

* a.$(p \wedge q) \rightarrow p \equiv \neg (p \wedge q) \vee p$
$(p \wedge q) \rightarrow p \equiv (\neg p \vee \neg q) \vee p$
$(p \wedge q) \rightarrow p \equiv (\neg p) \vee (\neg q \vee p)$
$(p \wedge q) \rightarrow p \equiv T \vee (\neg q \vee p)$
$(p \wedge q) \rightarrow p \equiv T$

* b.$p \rightarrow (p \vee q) \equiv \neg p \vee (p \vee q)$
$p \rightarrow (p \vee q) \equiv (\neg p \vee p) \vee q$
$p \rightarrow (p \vee q) \equiv T \vee q$
$p \rightarrow (p \vee q) \equiv T$

* c.$\neg p \rightarrow (p \rightarrow q) \equiv \neg (\neg p) \vee (p \rightarrow q)$
$\neg p \rightarrow (p \rightarrow q) \equiv p \vee (\neg p \vee q)$
$\neg p \rightarrow (p \rightarrow q) \equiv (p \vee p) \vee q$
$\neg p \rightarrow (p \rightarrow q) \equiv T \vee q$
$\neg p \rightarrow (p \rightarrow q) \equiv T$

* d.$(p \wedge q) \rightarrow (p \rightarrow q) \equiv \neg (p \wedge q) \vee (p \rightarrow q)$
$(p \wedge q) \rightarrow (p \rightarrow q) \equiv \neg (p \wedge q) \vee (p \rightarrow q)$
$(p \wedge q) \rightarrow (p \rightarrow q) \equiv \neg p \vee (\neg q \vee q)$
$(p \wedge q) \rightarrow (p \rightarrow q) \equiv \neg p \vee T$
$(p \wedge q) \rightarrow (p \rightarrow q) \equiv T$

* e.$\neg (p \rightarrow q) \rightarrow p \equiv \neg [\neg (p \rightarrow q)] \vee p$
$\neg (p \rightarrow q) \rightarrow p \equiv \neg [\neg (\neg p \vee q)] \vee p$
$\neg (p \rightarrow q) \rightarrow p \equiv \neg (p \wedge \neg q) \vee p$
$\neg (p \rightarrow q) \rightarrow p \equiv (\neg p \vee q) \vee p$
$\neg (p \rightarrow q) \rightarrow p \equiv (\neg p \vee p) \vee q$
$\neg (p \rightarrow q) \rightarrow p \equiv T  \vee q$
$\neg (p \rightarrow q) \rightarrow p \equiv T$

* f.$\neg (p \rightarrow q) \rightarrow \neg q \equiv \neg [\neg (p \rightarrow q)] vee \neg q$
$\neg (p \rightarrow q) \rightarrow \neg q \equiv \neg [\neg (\neg p \vee q)] \vee \neg q$
$\neg (p \rightarrow q) \rightarrow \neg q \equiv \neg (p \wedge \neg q) \vee \neg q$
$\neg (p \rightarrow q) \rightarrow \neg q \equiv (\neg p \vee q) \vee \neg q$
$\neg (p \rightarrow q) \rightarrow \neg q \equiv \neg p \vee (q \vee \neg q)$
$\neg (p \rightarrow q) \rightarrow \neg q \equiv \neg p \vee T$
$\neg (p \rightarrow q) \rightarrow \neg q \equiv T$

## 第十二题

* a.$[\neg p \wedge (p \vee q)] \rightarrow q \equiv \neg [(\neg p \wedge (p \vee q)] \vee p$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv [p \vee \neg (p \vee q)] \vee q$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv [p \vee (\neg p \wedge \neg q)] \vee q$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv [(p \vee \neg p) \wedge (p \vee \neg q)] \vee q$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv [T \wedge (p \vee \neg q)] \vee q$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv (p \vee \neg q) \vee q$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv \vee (\neg p \vee q)$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv p \vee T$
$[\neg p \wedge (p \vee q)] \rightarrow q \equiv T$

* b.$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv \neg [(p \rightarrow q) \wedge (q \rightarrow r)] \vee (p \rightarrow r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv \neg [(\neg p \vee q) \wedge (\neg q \vee r)] (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [[\neg (\neg p \vee q) \wedge (\neg q \vee r)]] \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [(p \wedge \neg q) \vee (q \wedge \neg r)] \vee (\neg r \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [[(p \wedge \neg q) \wedge (\neg q \vee q)] \vee [(p \wedge \neg p) \vee \neg r]] \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [(p \vee q) \wedge (p\neg q \vee q)] \vee [(p \vee \neg r) \wedge (\neg p \vee \neg r)] \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [(p \vee q) \vee [(p \wedge \neg q) \vee \neg r]] \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [[(p \vee q) \vee (p \vee \neg q) \vee [(p \vee q) \vee \neg r]] \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [[p \vee (q \vee \neg q)] \vee [(p \vee q)]\vee \neg r]]$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv [(p \vee T) \vee [(p \vee q) \vee \neg r]] \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv T\ \vee [(p \vee q) \vee \neg r] \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv T \vee (\neg p \vee r)$
$[(p \rightarrow q) \wedge (q \rightarrow r)] \rightarrow (p \rightarrow r) \equiv T$

* c.$[p \wedge (p \rightarrow q)] \rightarrow q \equiv [p \wedge (\neg p \vee q)] \rightarrow q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv [(p \wedge \neg p) \vee (p \wedge q)] \rightarrow q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv [[(p \wedge \neg p) \vee p] \wedge [(p \wedge \neg p) \vee q]] \rightarrow q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv [(F \vee p) \wedge (F \vee q)] \rightarrow q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv [F \vee (p \wedge q)] \rightarrow q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv (p \wedge q) \rightarrow q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv \neg (p \wedge q) \vee q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv (\neg p \vee \neg q) \vee q$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv \neg p \vee (\neg q \vee q)$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv \neg p \vee T$
$[p \wedge (p \rightarrow q)] \rightarrow q \equiv T$

* d.$[(p \vee q) \wedge (p \rightarrow r) \wedge (q \rightarrow r)] \rightarrow r$
$\equiv [(p \vee q) \wedge [(p \vee q) \rightarrow r]]$
$\equiv [(p \vee q) \wedge [\neg (p \vee q) \vee r]] \rightarrow r$
$\equiv [[(p \vee q) \wedge (p \vee q)] \vee [(p \vee q) \wedge r]] \rightarrow r$
$\equiv [F \vee [(p \vee q) \wedge r] \rightarrow r$
$\equiv [(p \vee q) \wedge r] \rightarrow r$
$\equiv \neg [(p \vee q) \wedge r] \vee r$
$\equiv [\neg ( p \vee q) \vee \neg r] \vee r$
$\equiv [(\neg p \wedge \neg q) \vee \neg r] \vee r$
$\equiv (\neg p \wedge \neg q) \vee (\neg r \vee \neg r)$
$\equiv (\neg p \wedge \neg q) \vee p$
$\equiv (\neg p \vee p) \wedge (\neg q \vee p)$
$\equiv T \vee (\neg q \vee p)$
$\equiv T$

## 第十三题

* a.$p \vee (p \wedge q) \equiv p$
  |$p$|$q$|$p \wedge q$|$p \vee (p \wedge q)$|
  |----|----|----|----|
  |0|0|0|0|
  |0|1|0|0|
  |1|0|0|1|
  |1|1|1|1|

* b.$p \wedge (p \vee q) \equiv p$
  |$p$|$q$|$p \vee q$|$p \wedge (p \vee q)$|
  |----|----|----|----|
  |0|0|0|0|
  |0|1|1|0|
  |1|0|1|1|
  |1|1|1|1|

## 第十四题

* $[\neg p \wedge(p \rightarrow q)] \rightarrow \neg q$
  $\equiv \neg (\neg \wedge (p \rightarrow q)) \vee \neg q$
  $\equiv (p \vee \neg(p \rightarrow q)) \vee \neg q$
  $\equiv (p \vee \neg (\neg p \vee q)) \vee \neg q$
  $\equiv (p \vee (p \vee \neg q)) \vee \neg q$
  $\equiv (p \vee p) \vee (\neg q \vee \neg q)$
  $\equiv p \vee p$
  $\equiv p$

* 所以$(\neg p \wedge (p \rightarrow q)) \rightarrow \neg q$不是永真式

## 第十五题

* $(\neg p \wedge (p \rightarrow )) \rightarrow \neg p$
  $\equiv \neg (\neg p \wedge (p \rightarrow q)) \vee \neg p$
  $\equiv (p \vee \neg (p \rightarrow q)) \vee \neg p$
  $\equiv (p \vee \neg (\neg \vee q)) \vee \neg p$
  $\equiv (p \vee (p \vee \neg q)) \vee \neg p$
  $\equiv (p \vee p) \vee (\neg q \vee \neg p)$
  $\equiv (p \vee \neg p) \vee \neg q$
  $\equiv T \vee \neg q$
  $\equiv T$

## 第十六题（表8第3个）

* $p \leftrightarrow q \equiv (p \wedge q) \vee (\neg p \wedge \neg q)$
  |$p$|$q$|$\neg p$|$\neg q$|$p \leftrightarrow q$|$p \wedge q$|$\neg p \wedge \neg q$|$(p \wedge q) \vee (\neg p \wedge \neg q)$|
  |----|----|----|----|----|----|----|----|
  |0|0|1|1|1|0|1|1|
  |0|1|1|0|0|0|0|0|
  |1|0|0|1|0|0|0|0|
  |1|1|0|0|1|1|0|1|

## 第十七题（表8第4个）

* $\neg (p \leftrightarrow q) \equiv p \leftrightarrow \neg q$
  |$p$|$q$|$\neg q$|$p \leftrightarrow q$|$\neg (p \leftrightarrow q)$|$p \leftrightarrow \neg q$|
  |----|----|----|----|----|----|
  |0|0|1|1|0|0|
  |0|1|0|0|1|1|
  |1|0|1|0|1|1|
  |1|1|0|1|0|0|

## 第十八题(表7第2个)

* $p \rightarrow q \equiv \neg q \rightarrow \neg p$
  |$p$|$q$|$\neg p$|$\neg q$|$p \rightarrow q$|$\neg q \rightarrow \neg p$|
  |----|----|----|----|----|----|
  |0|0|1|1|1|1|
  |0|1|1|0|1|1|
  |1|0|0|1|0|0|
  |1|1|0|0|1|1|

## 表7第1个

* $p \rightarrow q \equiv \neg p \vee q$
  |$p$|$q$|$\neg p$|$p \rightarrow q$|$\neg p \vee q$|
  |----|----|----|----|----|
  |0|0|1|1|1|
  |0|1|1|1|1|
  |1|0|0|0|0|
  |1|1|0|1|1|

## 第十九题

* $\neg p \leftrightarrow q$
  $\equiv \neg (\neg p) \leftrightarrow \neg q$
  $\equiv p \leftrightarrow \neg q$

## 第二十题

* $\neg (p \bigoplus q) \equiv p \leftrightarrow q$
  |$p$|$q$|$p \bigoplus q$|$\neg (p \bigoplus q)$|$p \leftrightarrow q$|
  |----|----|----|----|----|
  |0|0|0|1|1|
  |0|1|1|0|0|
  |1|0|1|0|0|
  |1|1|0|1|1|

## 第二十一题

* $\neg (p \leftrightarrow q) \equiv \neg p \leftrightarrow q$
  $\equiv p \leftrightarrow \neg q$
  $\equiv neg p \leftrightarrow \neg (\neg q)$
  $\equiv neg p \leftrightarrow q$

## 第二十二题

* $(p \rightarrow q) \wedge (p \rightarrow r) \equiv p \rightarrow (q \wedge r)$
  $\equiv (\neg p \vee q) \wedge (\neg p \vee r)$
  $\equiv \neg p \vee (q \vee r)$
  $\equiv p \rightarrow (q \vee r)$

## 第二十三题

* $(p \rightarrow r) \wedge (q \rightarrow r) \equiv (p \vee q) \rightarrow r$
  $\equiv (\neg p \vee r) \wedge (\neg q \vee r)$
  $\equiv (\neg p \wedge \neg q) \vee r$
  $\equiv \neg (p \vee q) \vee r$
  $\equiv (p \vee q) \rightarrow r$

## 第二十四题

* $(p \rightarrow q) \vee (p \rightarrow r) \equiv p \rightarrow r$
  $\equiv (\neg p \vee q) \vee (\neg p \vee r)$
  $\equiv (\neg p \wedge \neg p) \vee (q \vee r)$
  $\equiv \neg (p \vee p) \vee (q \vee r)$
  $\equiv \neg p \vee (q \vee r)$
  $\equiv p \rightarrow (q \vee r)$

## 第二十五题

* $(p \rightarrow r) \vee (q \rightarrow r) \equiv (p \wedge q) \rightarrow r$
  $\equiv (\neg p \vee r) \vee (\neg q \vee r)$
  $\equiv (\neg p \vee \neg q) \vee r$
  $\equiv \neg (p \wedge q) \vee r$
  $\equiv (p \wedge q) \rightarrow r$

## 第二十六题

* $\neg p \rightarrow (q \rightarrow r) \equiv q \rightarrow (p \vee r)$
  $\equiv \neg (\neg p) \vee (q \rightarrow r)$
  $\equiv p \vee (\neg p \vee r)$
  $\equiv \neg q \vee (p \vee r)$
  $\equiv q \rightarrow (p \vee rs)$

## 第二十七题

* $p \rightarrow q \equiv (p \rightarrow q) \wedge (q \rightarrow p)$
  |$p$|$q$|$p \leftrightarrow q$|$p \rightarrow q$|$q \rightarrow p$|$(p \rightarrow q) \wedge (q \rightarrow p)$|
  |----|----|----|----|----|----|
  |0|0|1|1|1|1|
  |0|1|0|1|0|0|
  |1|0|0|0|1|0|
  |1|1|1|1|1|1|

## 第二十八题

* $p \leftrightarrow q \equiv \neg p \leftrightarrow \neg q$
  |$p$|$q$|$\neg p$|$\neg q$|$p \leftrightarrow q$|$\neg p \leftrightarrow q$|
  |----|----|----|----|----|----|
  |0|0|1|1|1|1|
  |0|1|1|0|0|0|
  |1|0|0|1|0|0|
  |1|1|0|0|1|1|

## 第二十九题

* $(p \rightarrow q) \wedge (q \rightarrow r) \rightarrow (p \rightarrow r)$
  $\equiv \neg ((p \rightarrow q) \wedge (q \rightarrow r)) \vee (p \rightarrow r)$
  $\equiv \neg ((p \rightarrow q) \vee \neg (q \rightarrow r)) \vee (p \rightarrow r)$
  $\equiv (\neg (\neg p \vee q) \vee \neg (q \vee r)) \vee (\neg p \vee r)$
  $\equiv ((p \vee \neg q) \vee (q \vee \neg r)) \vee (neg p \vee r)$
  $\equiv ((p \vee r) \vee (\neg q \vee q)) \vee (\neg p \vee r)$
  $\equiv ((p \vee r) \vee T) \vee (\neg p \vee r)$
  $\equiv T \vee (\neg p \vee r)$
  $\equiv T$

## 第三十题

* $(p \vee q) \wedge (\neg p \vee r) \rightarrow (q \vee r)$
  $\equiv \neg ((p \vee q) \wedge (\neg p \vee r)) \vee (q \vee r)$
  $\equiv (\neg (p \vee q) \vee (\neg (\neg p \vee r))) \vee (q \vee r)$
  $\equiv ((\neg p \wedge \neg q) \vee (p \vee \neg r)) \vee (q \vee r)$
  $\equiv (\neg p \wedge \neg q) \vee ((p \vee \neg r) \vee (q \vee r))$
  $\equiv (\neg p \vee \neg q) \vee ((p \vee q) \vee (r \vee \neg r))$
  $\equiv (\neg p \vee \neg q) \vee ((p \vee q) \vee T)$
  $\equiv (\neg p \vee \neg q) \vee T$
  $\equiv T$

## 第三十一题

* a.$(p \rightarrow q \rightarrow r)$
    |$p$|$q$|$r$|$p \rightarrow q$|$(p \rightarrow q) \rightarrow r$|
    |----|----|----|----|----|----|
    |0|0|0|1|0|
    |0|0|1|1|1|
    |0|1|0|1|1|
    |0|1|1|1|1|
    |1|0|0|0|1|
    |1|0|1|0|1|
    |1|1|0|1|0|
    |1|1|1|1|1|

* b.$p \rightarrow (q \rightarrow r)$
    |$p$|$q$|$r$|$q \rightarrow r$|$p \rightarrow (q \rightarrow r)$|
    |----|----|----|----|----|----|
    |0|0|0|1|1|
    |0|0|1|1|1|
    |0|1|0|0|1|
    |0|1|1|1|1|
    |1|0|0|1|1|
    |1|0|1|1|1|
    |1|1|0|0|0|
    |1|1|1|1|1|

## 第三十二题

* a.$(p \vee q) \rightarrodw r$
    |$p$|$q$|$r$|$p \wedge q$|$(p \wedge q) \rightarrow r$|
    |----|----|----|----|----|
    |0|0|0|0|1|
    |0|0|1|0|1|
    |0|1|0|0|1|
    |0|1|1|0|1|
    |1|0|0|0|1|
    |1|0|1|0|1|
    |1|1|0|1|0|
    |1|1|1|1|1|

* b.$(p \rightarrow r) \wedge (q \rightarrow r)$
  |$p$|$q$|$r$|$p \rightarrow r$|$q \rightarrow r$|$(p \rightarrow r) \wedge (q \rightarrow r)$|
    |----|----|----|----|----|----|
    |0|0|0|1|1|1|
    |0|0|1|1|1|1|
    |0|1|0|1|0|0|
    |0|1|1|1|1|1|
    |1|0|0|0|1|0|
    |1|0|1|1|1|1|
    |1|1|0|0|0|0|
    |1|1|1|1|1|1|

## 第三十三题

* a.$(p \rightarrow q) \rightarrow (r \rightarrow s)$
    |$p$|$q$|$r$|$s$|$p \rightarrow q$|$r \rightarrow s$|$(p \rightarrow q) \rightarrow (r \rightarrow s)$|
    |----|----|----|----|----|----|----|
    |0|0|0|0|1|1|1|
    |0|0|0|1|1|1|1|
    |0|0|1|0|1|0|0|
    |0|0|1|1|1|1|1|
    |0|1|0|0|1|1|1|
    |0|1|0|1|1|1|1|
    |0|1|1|0|1|0|0|
    |0|1|1|1|1|1|1|
    |1|0|0|0|0|1|1|
    |1|0|0|1|0|1|1|
    |1|0|1|0|0|0|1|
    |1|0|1|1|0|1|1|
    |1|1|0|0|1|1|1|
    |1|1|0|1|1|1|1|
    |1|1|1|0|1|0|0|
    |1|1|1|1|1|1|1|

* b.$(p \rightarrow r) \rightarrow (q \rightarrow s)$
    |$p$|$q$|$r$|$s$|$p \rightarrow s$|$q \rightarrow s$|$(p \rightarrow r) \rightarrow (q \rightarrow s)$|
    |----|----|----|----|----|----|----|
    |0|0|0|0|1|1|1|
    |0|0|0|1|1|1|1|
    |0|0|1|0|1|1|1|
    |0|0|1|1|1|1|1|
    |0|1|0|0|1|0|0|
    |0|1|0|1|1|1|1|
    |0|1|1|0|1|0|0|
    |0|1|1|1|1|1|1|
    |1|0|0|0|0|1|1|
    |1|0|0|1|1|1|1|
    |1|0|1|0|0|1|0|
    |1|0|1|1|1|1|1|
    |1|1|0|0|0|0|0|
    |1|1|0|1|1|1|1|
    |1|1|1|0|0|0|0|
    |1|1|1|1|1|1|1|

## 第三十四题

* a.$p \wedge \neg q$

* b.$p \vee (q \wedge r \vee T)$

* c.$(p \vee q) \wedge (q \vee F)$

## 第三十五题

* a.$p \vee \neg q \vee r$

* b.$(p \vee q \vee r) \wedge s$

* c.$(p \wedge T) \vee (q \wedge F)$

## 第三十六题

* 当$s$和$s'$的真值表相同时，$s \equiv s'$

## 第三十七题

* 如果给定一个复合命题，让其取两次对偶，即对于每一个$\vee$,先取$\wedge$,再取$\vee$;对于每一个$\wedge$,先取$\vee$,再取$\wedge$;对于每一个$\neg$,先取$\neg$的否命题；再取$\neg$;对于每一个$T$,都先取$F$,再取$T$,对于每一个$F$,都先取T, 再取$F$.因此$(s' \equiv s)$

## 第三十八题

* 表六的两个恒等律互为对偶式，因为$p \wedge T \equiv p$可以通过将$\wedge$转化成$T$,将$T$转化成$F$来得到另一个恒等律$p \vee F \equiv p$.

* 表六的两个支配律互为对偶式，因为$p \vee T$可以将$\vee$和$T$分别转化为$\wedge$和$F$来得到另一个支配律$p \wedge F \equiv F$.

* 表六的两个幂等律互为对偶式，因为$p \vee p \equiv p$ 可以通过将$\vee$转化为$\wedge$来得到另一个幂等律$p \wedge p \equiv p$

* 表六的两个交换律互为对偶式，因为$p \vee q \equiv q \vee p$可以将$\vee$转化为$\wedge$来得到$p \wedge p \equiv q \wedge p$

* 表六的两个结合律互为对偶式，因为$(p \vee q) \vee r \equiv p \vee (q \vee r)$可以通过将$\vee$转化为$\wedge$来得到$(p \wedge q) \wedge r \equiv p \wedge (q \wedge r)$

* 表六的两个分配律互为对偶式，因为$p \vee (q \wedge r) \equiv (p \vee q) \wedge (p \vee r)$可以通过将$\vee$转化为$\wedge$,将$\wedge$转化为$\vee$来得到$p \wedge (q \vee r) \equiv (p \wedge q) \vee (p \wedge r)$

* 表六的两个德摩根律互为对偶式，因为$\neg (p \wedge q) \equiv \neg p \vee \neg q$可以通过将$\wedge$转化为$\neg p \wedge \neg q$来得到$\neg (p \vee q) \equiv \neg p \wedge \neg q$

* 表六的两个吸收律互为对偶式，因为$p \vee (p \wedge q) \equiv p$可以通过将$\vee $转化为$\wedge$,将$\wedge$转化为$\vee$来得到$p \wedge (p \vee q) \equiv p$

* 表六的两个否定律互为对偶式，因为$p \vee \neg p \equiv T$可以通过将$\vee$转化为$\wedge$,将$T$转化为$F$来得到$p \wedge \neg p \equiv F$

## 第三十九题

* 因为通过运算符$\wedge \vee \neg$的两个等价的复合命题的对偶式的真值也完全相同。

## 第四十题

* $p \vee (q \wedge r)$

## 第四十一题

* $(p \vee q) \wedge (p \vee r)$

## 第四十二题

* 若给定一个真值表以及各命题变元，求真值表的析取范式。解法是将每一行为1的真值都合取，然后再分别将这些合取式进行析取，最后再把式子化简，得到的式子就是该真值表的析取范式。还有一种方法是观察式子为1的这些命题变元，看他们每一行分别是如何得到析取范式的。

## 第四十三题

* 将一个拥有n个命题变元的真值表的每一行为1的真值都合取，然后再分别将这些合取式进行析取，最后再把式子化简，得到的式子就是该真值表的析取范式。每一个析取范式都可以通过命题变元利用$\wedge \vee \neg$来得到。因此$\wedge \vee \neg$构成一个逻辑运算符的功能完备集。

## 第四十四题

* $\neg (\neg p \wedge \neg q) \equiv p \vee q$
  因此每一个由$\neg$和$\wedge$组成的析取范式都可以推出由$\vee$组成的式子。又因为43题所提到的所有的析取范式都可以由$\wedge$$\vee$$\neg$来得到，因此$\neg$和$\wedge$可以构成一个逻辑运算符的功能完备集。

## 第四十五题

* 每一个由$\neg$和$\vee$组成的析取范式都可以推出由$\wedge$组成的式子。又因为43题所提到的所有的析取范式都可以由$\wedge$$\vee$$\neg$来得到，因此$\neg$$\vee$可以构成一个逻辑运算符的功能完备集。

## 第四十六题

* $NAND$
  |$p$|$q$|$p \mid q$|
  |----|----|----|
  |0|0|1|
  |0|1|1|
  |1|0|1|
  |1|1|0|

## 第四十七题

* $p \mid q \equiv \neg (p \wedge q)$
  |$p$|$q$|$p \mid q$|$ p \wedge q$|$\neg (p \wedge q)$|
  |----|----|----|----|----|
  |0|0|1|0|1|
  |0|1|1|0|1|
  |1|0|1|0|1|
  |1|1|0|1|0|

## 第四十八题

* $NOR$
  |$p$|$q$|$p \downarrow q$|
  |----|----|----|
  |0|0|1|
  |0|1|0|
  |1|0|0|
  |1|1|0|

## 第四十九题

* |$p \downarrow q \equiv \neg (p \vee q)$|
  |$p$|$q$|$p \downarrow q$|$p \vee q$|$\neg (p \vee q)$|
  |----|----|----|----|----|
  |0|0|1|0|1|
  |0|1|0|1|0|
  |1|0|0|1|0|
  |1|1|0|1|0|

## 第五十题

* a.$p \downarrow p \equiv \neg p$
  |$p$|$p \downarrow p$|$\neg p$|
  |----|----|----|----|
  |0|1|1|
  |0|1|1|
  |1|0|0|
  |1|0|0|

* b.$(p \downarrow q) \downarrow (p \downarrow q) \equiv p \vee q$
  |$p$|$q$|$(p \downarrow q) \downarrow (p \downarrow q)$|$p \vee q$|
  |----|----|----|----|
  |0|0|0|0|
  |0|1|1|1|
  |1|0|1|1|
  |1|1|1|1|

* c.由表a和表b证明可得：$p \vee q \equiv \neg p$,$(p \downarrow q) \downarrow (p \downarrow q) \equiv p\vee p$，由练习49可得：$p \downarrow q \equiv \neg (p \vee q)$,因此{$\downarrow$}是一个逻辑运算符的功能完备的集。

## 第五十一题

* $p \downarrow q \equiv p \rightarrow q$
由于第49题证明了$p \downarrow q \equiv \neg (p \vee q)$，而$\neg (p \vee q) \equiv p \rightarrow q$,所以用运算符$\downarrow$来构造一个等价于$p \rightarrow q$的命题就是$p \downarrow q$.

## 第五十二题

* a.$p \mid q \equiv \neg p$
  |$p$|$p \mid p$|$\neg p$|
  |----|----|----|----|
  |0|1|1|
  |0|1|1|
  |1|0|0|
  |1|0|0|

* b.$(p \mid q) \mid (p \mid q) \equiv p \vee q$
  |$p$|$q$|$(p \mid q) \mid (p \mid q)$|$(p \vee q)$|
  |----|----|----|----|
  |0|0|0|0|
  |0|1|1|1|
  |1|0|1|1|
  |1|1|1|1|

* c.由于第五十二题的练习a和b可得：$p \mid p \equiv \neg p$,$(p \mid q) \mid (p \mid q)$ \equiv p \vee q,由练习47可得：$p \mid q \equiv \neg (p \wedge q)$,因此{$\mid$}是一个逻辑运算符的功能完备集。

## 第五十三题

* $p \mid q \equiv q \mid p$
  |$p$|$q$|$p \mid q$|$q \mid p$|
  |----|----|----|----|
  |0|0|1|1|
  |0|1|0|0|
  |1|0|0|0|
  |1|1|0|0|

## 第五十四题

* $p \mid (q \mid r)$
  |$p$|$q$|$r$|$q \mid r$|$p \mid (q \mid r)$|
  |----|----|----|----|----|
  |0|0|0|1|1|
  |0|0|1|0|1|
  |0|1|0|0|1|
  |0|1|1|0|1|
  |1|0|0|1|0|
  |1|0|1|0|0|
  |1|1|0|0|0|
  |1|1|1|0|0|

  $(p \mid q) \mid r$
  |$p$|$q$|$r$|$p \mid q$|$(p \mid q) \mid r$|
  |----|----|----|----|----|
  |0|0|0|1|0|
  |0|0|1|1|0|
  |0|1|0|0|1|
  |0|1|1|0|0|
  |1|0|0|0|1|
  |1|0|1|0|0|
  |1|1|0|0|1|
  |1|1|1|0|0|

* 因此$p \mid (q \mid r)$和$(p \mid q) \mid r$不等价

## 第五十五题

* (这道题要看到第十二章的时候再来做)

## 第五十六题

* 因为$p$和$q$是逻辑等价的，这代表$p$和$q$具有相同的真值表；而$q$和$r$是逻辑等价的，这代表$q$和$r$具有相同的真值表。因此$p$和$q$和$r$也具有相同的真值表,因此这三个命题变元组成的复合命题是逻辑等价的，即：$p$和$r$是逻辑等价的。

## 第五十七题

* 令数据库打开为$a$,令监控程序被置于关闭状态为$b$,令系统不在初始状态为$c$,则根据题目的要求可以得出以下结论：$c \rightarrow (a \vee b)$.

* $c \rightarrow (a \vee b) \equiv \neg \vee (a \vee b) \equiv \neg c \vee a \vee b$

* 因此和题目所述的等价易懂的规范说明可以写为:系统在初始状态或者数据库目录打开或者监控程序被置于关闭的位置。

## 第五十八题

* 第五十八题是说：当$p$和$q$$r$分别是$T$和$F$中的哪个值的时候，析取式$p \vee \neg q$,$\neg p \vee r$,$q \vee r$,$q \vee \neg r$,$\neg q \vee \neg r$同时为$T$。

* 要想使得$p \vee \neg q$得到$T$,就必须满足$p$为$T$;要使$\neg p \vee q$得到$T$,就必须满足$q$为$T$;要使$q \vee r$得到$T$,就必须满足$q$为$T$;要使$q \vee \neg r$得到$T$,就必须满足$q$为$T$;要使$\neg q \vee \neg r$得到$T$,就必须满足$\neg r$为$T$,则$r$为$F$.

* 因此当$p$和$q$为$T$,当$r$为$F$的时候，此析取式可以同时为真。

## 第五十九题

* 由于此题的形式和第五十八题类似，但是这道题涉及到的析取式有一定的数量，因此可以采用表格的形式来判断当$p$,$q$,$r$,$s$分别为什么值时，析取式$p \vee \neg q \vee s$,$\neg p \vee \neg r \vee s$,$\neg p \vee \neg r \vee \neg s$,$\neg p \vee \neg r \vee \neg s$,$q \vee r \vee \neg s$,$q \vee \neg r \vee \neg s$,$\neg p \vee \neg q \vee \neg s$,$\neg p \vee \neg q \vee \neg s$,$p \vee r \vee s$,$p \vee r \vee \neg s$可以同时为真。为了便于查找出符合题目要求的条件，我们将符合的地方写1，不符合的地方写0。

* ||$p \vee \neg q \vee s$|$\neg p \vee \neg r \vee s$|$\neg p \vee \neg q \vee \neg s$|$\neg p \vee q \vee \neg s$|$q \vee r \vee \neg s$|$q \vee \neg r \vee \neg s$|$\neg p \vee \neg q \vee \neg s$|$p \vee r \vee s$|$p \vee r \vee \neg s$|
  |----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|
  |$p为0，q为0，r为0，s为0$|1|1|1|1|1|1|1|0|1|
  |$p为0，q为0，r为0，s为1$|1|1|1|1|0|1|1|1|0|
  |$p为0，q为0，r为1，s为0$|1|1|1|1|1|1|1|1|1|
  |$p为0，q为0，r为1，s为1$|1|1|1|1|1|0|1|1|1|
  |$p为0，q为1，r为0，s为0$|0|1|1|1|1|1|1|0|1|
  |$p为0，q为1，r为0，s为1$|1|1|1|1|1|1|1|1|0|
  |$p为0，q为1，r为1，s为0$|0|1|1|1|1|1|1|1|1|
  |$p为0，q为1，r为1，s为1$|1|1|1|1|1|1|1|1|1|
  |$p为1，q为0，r为0，s为0$|1|1|1|1|1|1|1|1|1|
  |$p为1，q为0，r为0，s为1$|1|1|1|0|0|1|1|1|1|
  |$p为1，q为0，r为1，s为0$|1|0|1|1|1|1|1|1|1|
  |$p为1，q为0，r为1，s为1$|1|1|0|0|1|0|1|1|1|
  |$p为1，q为1，r为0，s为0$|1|1|1|1|1|1|1|1|1|
  |$p为1，q为1，r为0，s为1$|1|1|1|1|1|1|0|1|1|
  |$p为1，q为1，r为1，s为0$|1|0|1|1|1|1|1|1|1|
  |$p为1，q为1，r为1，s为1$|1|1|0|1|1|1|0|1|1|

* 由题可知，第五十九题一共有四种情况符合题意，它们分别是：第一种，当$p$为0，$q$为0，$r$为1，$s$为0；第二种，当$p$为0，$q$为1，$r$为1，$s$为1；第三种，当$p$为1，$q$为0，$r$为0，$s$为0；第四种，当$p$为1，$q$为1，$r$为0，$s$为0。

## 第六十题

## 第六十一题

* a.因为题目要判断$(p \vee \neg q) \wedge (\neg p \vee \neg q)$是否是可满足的，因此$(p \vee \neg q) \wedge (\neg p \vee \neg q)$的结果为$T$视为是可满足的,所以$p \vee \neg q$为$T$,$\neg p \vee \neg q$为$T$。所以当$p$为$F$,$q$为$F$时，$(p \vee \neg q) \wedge (\neg p \vee \neg q)$的结果为$T$,所以它是可满足的。

* b.因为题目要判断$(p \rightarrow q) \wedge (p \rightarrow \neg q) \wedge (\neg p \rightarrow q) \wedge (\neg p \rightarrow \neg q)$是否是可满足的，因此$(p \rightarrow q) \wedge (\neg p \rightarrow \neg q)$的结果为$T$视为是可满足的,所以$p \rightarrow q$为$T$,$p \rightarrow  \neg q$为$T$.由于$p$和$q$分别为0或1时，不满足题目的要求，因此$(p \rightarrow q) \wedge (p \rightarrow \neg q) \wedge (\neg p \rightarrow q) \wedge (\neg p \rightarrow \neg q)$是不可满足的。

* c.因为题目要判断$(p \leftrightarrow q) \wedge (\neg p \leftrightarrow q)$是否是可满足的，因此$(p \leftrightarrow q) \wedge (\neg p \leftrightarrow q)$的结果为$T$视为是可满足的,所以$p \leftrightarrow q$为$T$,$\neg p \leftrightarrow q$的结果为$T$。由于$p$和$q$分别为0或1时，不满足题目的要求，因此$(p \leftrightarrow q) \wedge (\neg p \leftrightarrow q)$是不可满足的。

## 第六十二题

* a.因为题目要判断$(p \vee q \vee \neg r) \wedge (p \vee \neg q \vee \neg s) \wedge (p \vee \neg r \vee \neg s) \wedge (\neg p \vee \neg q \vee \neg s) \wedge (p \vee q \vee \neg s)$是否是可满足的，因此$(p \vee q \vee \neg r) \wedge (p \vee \neg q \vee \neg s) \wedge (p \vee \neg r \vee \neg s) \wedge (\neg p \vee \neg q \vee \neg s) \wedge (\neg p \vee \neg q \vee \neg s) \wedge (p \vee q \neg s)$s的结果为$T$视为是可满足的。所以$p \vee q \vee \neg r$为$T$,$p \vee \neg q \vee \neg s$为$T$,$p \vee \neg r \vee \neg s$为$T$,$\neg p \vee \neg q \vee \neg s$为$T$,$p \vee q \vee \neg s$为$T$.所以有以下这九种情况，该式子是可满足的。第一种，当$p$为0,$q$为0，$r$为0，$s$为0;第二种，当$p$为0,$q$为1，$r$为0，$s$为0;第三种，当$p$为0,$q$为1，$r$为1，$s$为0;第四种，当$p$为1,$q$为0，$r$为0，$s$为0;第五种，当$p$为1,$q$为0，$r$为0，$s$为1;第六种，当$p$为1,$q$为0，$r$为1，$s$为0;第七种，当$p$为1,$q$为0，$r$为1，$s$为1;第八种，当$p$为1,$q$为1，$r$为0，$s$为0;第九种，当$p$为1,$q$为1，$r$为1，$s$为0。

* b.因为题目要判断$(\neg \vee \neg q \vee r) \wedge (\neg p \vee q \vee \neg s) \wedge (p \vee \neg q \neg s) \wedge (\neg p \vee \neg r \vee \neg s) \wedge (p \vee q \vee \neg r) \wedge (p \vee \neg r \vee \neg s)$是否是可满足的，因此$(\neg p \vee \neg q \vee r) \wedge (\neg p \vee q \vee s) \wedge (p \vee \neg q \vee \neg s) \wedge (\neg p \vee \neg r \vee \neg s) \wedge (p \vee q \vee \neg s) \wedge (p \vee \neg r \vee \neg s)$的结果是$T$视为是可满足的，所以$\neg p \vee \neg q \vee r$为$T$,$\neg p \vee q \vee \neg s$为$T$,$p \vee \neg q \vee \neg $为$T$,$\neg p \vee \neg r \vee \neg s$为$T$,$p \vee q \vee \neg r$为$T$,$p \vee \neg r \vee \neg s$为$T$.因此有一下六种情况，该式子是可满足的。第一种，当$p$为0,$q$为0，$r$为0，$s$为0;第二种，当$p$为0,$q$为0，$r$为0，$s$为1;第三种，当$p$为0,$q$为1，$r$为0，$s$为0;第四种，当$p$为0,$q$为1，$r$为1，$s$为0;第五种，当$p$为1,$q$为0，$r$为0，$s$为0;第六种，当$p$为1,$q$为0，$r$为1，$s$为0。

* c.因为题目要判断$(p \vee q \vee r) \wedge (p \vee \neg q \vee s) \wedge (q \vee \neg r \vee s) \wedge (\neg p \vee r \vee s) \wedge (\neg p \vee q \vee \neg s) \wedge (p \vee \neg q \vee \neg r) \wedge (\neg p \vee \neg q \vee s) \wedge (\neg p \vee \neg r \vee \neg s)$是否是可满足的，因此$(p \vee q \vee r) \wedge (p \vee \neg q \vee s) \wedge (q \vee \neg r \vee s) \wedge (\neg p \vee r \vee s) \wedge (\neg p \vee q \vee \neg s) \wedge (p \vee \neg q \vee \neg r) \wedge (\neg p \vee \neg q \vee s) \wedge (\neg p \vee \neg r \vee \neg s)$的结果是$T$视为是可满足的，所以$p \vee q \vee r$为$T$,$p \vee \neg q \vee s$为$T$,$q \vee \neg r \vee s$为$T$,$\neg p \vee r \vee s$为$T$,$\neg p \vee q \vee \neg s$为$T$,$p \vee \neg q \vee \neg r$,为$T$,$\neg p \vee \neg q \vee s$为$T$,$\neg p \vee \neg r \vee \neg s$为$T$.因此有一下三种情况，该式子是可满足的。第一种，当$p$为0,$q$为0，$r$为1，$s$为1;第二种，当$p$为0,$q$为1，$r$为0，$s$为1;第三种，当$p$为1,$q$为1，$r$为0，$s$为1。

## 第六十三题

* 为了对数独谜题编码，令$p(i,j,n)$表示一个命题，当数$n$位于第$i$行和第$j$的单元时它为真。因为$i$和$j$和$n$的取值范围都是1-4，所以总共有$4 * 4 * 4 = 64$个这样的命题。

* 给定一个数独谜题，我们首先对每一个已知数进行编码。然后我们构造一些符合命题来断言每一行包括了每一个数，每一列包括了每一个数，每一个$2 * 2$的九宫格包含了每一个数，并且每一个单元不包含多于一个数。接下来，我们可以验证，数独谜题可以通过一个真值赋值来求解，该真值赋值为64个$p(i,j,n)$（其中$i$和$j$和$n$的取值范围都是1-4）命题赋值，并且使得所有这些复合命题的合取式为真。

## 第六十四题

* 为了对数独谜题编码，令$p(i,j,n,)$表示一个命题，$i$代表横坐标，$j$发表纵坐标，$n$代表数字$n$,$n$的取值范围是1-9,因为数字$n$是在某一行和某一列组成的格内是唯一的，所以当数字$n$位于第$i$行和第$j$列时，数字$n$为真，并且数独9 * 9的行有9行，列有9列，数字$n$的取值范围是1-9中的某个数，所以每个小格内的数字一共有729种可能性，因为$9 * 9 * 9 = 729$.
* 从图1来看，数6位于第5行和第1列，所以点p的坐标为(5,1,6).即p(5,1,6),而其余的列数产生的数字不能为5，(因为第5行已经有5了)，所以p（5，j,6）j取2,3,4,5，6,7,8,9时为假，即p(5,2,6)p(5,3,6)p(5,4,6)p(5,5,6)p(5,6,6)p(5,7,6)p(5,8,6)p(5,9,6)都为假。

* 给定一个数独谜题，我们对已知数进行编码。例如图1中的第1行和第1列的数字2和第4行及第五列的数字4，它们分别是p（1,2,2），以及p'（4,5,4）。然后我们构造一些复合命题来断言，（断言指在某种情况下，条件成立）。每一行只包含了一个特定的数字$a$，每一列只包含了一个数字$b$，每一个3 * 3的九宫格内包含了一个数字$c$.并且吗每个单元不包含多于一个数（这句话的意思是每一行、每一列、每一个九宫格内，都有且只有一个数字，它是唯一的）。

* 接下来，数独谜题可以通过确定每一个空格上是什么数从而确定这81个空格上是什么数，这种真值赋值一共有729个，因为一行有1至9，9个数字，一列有1-9,9个数字，一共有9行，9列，所以$9 * 9 * 9 = 729$，并且使得所有这些复合命题的合取式为真。

* “并且使得所有这些复合命题的合取式为真”这句话的意思是：必须要让这些格子里的每一个数字在自己的格子里时，整个数独是正确的，（所以是合取）

* 那为什么在某一行固定时，每一列之间的关系是析取呢？（或者说，当某一列固定时，每一行的关系是析取呢）这是因为在行固定时，每个列上的数字是不固定的，只要这一列的数字是1-9就可以。同理，当列固定时，每一行上的数字也是不固定的，只要这一行的数字是1-9就可以。因此他们之间的关系用析取（或的关系）就可以。

* 我们断言每一行包含了每一个数:$$\bigwedge^9_{i = 1} \bigwedge^9_{n = 1} \bigvee^9_{j = 1}p(i,j,n)$$

* 我们断言每一列包含了每一个数:$$\bigwedge^9_{j = 1} \bigwedge^9_{n = 1} \bigvee^9_{i = 1}p(i,j,n)$$

* 我们断言每一个九宫格包含了每一个数:$$\bigwedge^2_{r = 0} \bigwedge^2_{s = 0} \bigwedge^9_{n = 1} \bigvee^3_{i = 1} \bigvee^3_{j = 1}p(3r + i,3s + j,n)$$

* 要断言没有一个单元包含多于一个数，我们对所有可能的$p(i,j,n) \rightarrow \neg p(i,j.,n)$取合取，其中$n,n',i,j的取值范围是1-9，并且n != n'$。

## 第六十五题

* 在第六十四题的基础上，现在我们分析这句话：我们断言每一行包含了每一个数:$$\bigwedge^9_{i = 1} \bigwedge^9_{n = 1} \bigvee^9_{j = 1}p(i,j,n)$$。这句话的意思是:第1行第1列的数字1和第1行第1列的数字2……直到第9行和第9列的数字9，它们之间做析取。

* 用公式罗列出来如下：$$\bigwedge^9_{i = 1}p(i,j,n) \equiv p(1,j,n) \wedge p(2,j,n) \wedge p(3,j,n) \wedge p(4,j,n) \wedge p(5,j,n) \wedge p(6,j,n) \wedge p(7,j,n)p(8,j,n) \wedge p(9,j,n)$$代表第$j$列第1至9行的数字$n$的合取。

* $$\bigwedge^9_{n = 1}p(i,j,n) \equiv p(i,j,1) \wedge p(i,j,3) \wedge p(i,j,4) \wedge p(i,j,5) \wedge p(i,j,6) \wedge p(i,j,7) \wedge p(i,j,8) \wedge p(i,j,9)$$代表某$i$行和某$j$列的数字$n$从1至9.

* $$\bigwedge^9_{j = 1}p(i,j,n) \equiv p(i,1,n) \wedge p(i,2,n) \wedge p(i,3,n) \wedge p(i,4,n) \wedge p(i,5,n) \wedge p(i,6,n) \wedge p(i,7,n) \wedge p(i,8,n) \wedge p(i,9,n)$$代表某$i$行中，每一列的数字分别从1至9，共9列

$$\bigwedge^9_{i = 1} \bigwedge^9_{n = 1} \bigvee^9_{j = 1}p(i,j,n)$$；首先，要断言第$i$行包含了数$n$，我们构成$$\bigvee^9_{j = 1}P(i,j,n)$$,要断言所有$i$行包含了所有$n$个数，我们将$n$的所有可能的九个可能的式子的析取式再合取，由此可以得到$$\bigwedge^9_{n = 1} \bigvee^9_{j = 1}P(i,j,n)$$.最后要断言每一行包含了每一个值，我们将一共九行的“每一行析取又合取”过的式子再做合取，得到新的公式：$$\bigwedge^9_{i = 1} \bigwedge^9_{n = 1} \bigvee^9_{j = 1}p(i,j,n)$$。

$$\bigwedge^9_{i = 1} \bigwedge^9_{n = 1} \bigvee^9_{j = 1}p(i,j,n) \equiv \bigvee^9_{j = 1} p(i,j,1) \wedge \bigvee^9_{j = 1} p(i,j,2) \wedge \bigvee^9_{j = 1} p(i,j,3) \wedge \bigvee^9_{j = 1} p(i,j,4) \wedge \bigvee^9_{j = 1} p(i,j,5) \wedge \bigvee^9_{j = 1} p(i,j,6) \wedge \bigvee^9_{j = 1} p(i,j,7) \wedge \bigvee^9_{j = 1} p(i,j,8)
\wedge \bigvee^9_{j = 1} p(i,j,9) \equiv P(i,1,1) \vee P(i,2,1) \vee P(i,3,1) \vee P(i,4,1) \vee P(i,5,1) \vee P(i,6,1) \vee P(i,7,1) \vee P(i,8,1) \vee P(i,9,1)\\
\wedge P(i,1,2) \vee P(i,2,2) \vee P(i,3,2) \vee P(i,4,2) \vee P(i,5,2) \vee P(i,6,2) \vee P(i,7,2) \vee P(i,8,2) \vee P(i,9,2)\\
\wedge P(i,1,3) \vee P(i,2,3) \vee P(i,3,3) \vee P(i,4,3) \vee P(i,5,3) \vee P(i,6,3) \vee P(i,7,3) \vee P(i,8,3) \vee P(i,9,3)\\
\wedge P(i,1,4) \vee P(i,2,4)\vee P(i,3,4) \vee P(i,4,4) \vee P(i,5,4) \vee P(i,6,4) \vee P(i,7,4) \vee P(i,8,4) \vee P(i,9,4)\\
\wedge P(i,1,5) \vee P(i,2,5)\vee P(i,3,5) \vee P(i,4,5) \vee P(i,5,5) \vee P(i,6,5) \vee P(i,7,5) \vee P(i,8,5) \vee P(i,9,5)\\
\wedge P(i,1,6) \vee P(i,2,6)\vee P(i,3,6) \vee P(i,4,6) \vee P(i,5,6) \vee P(i,6,6) \vee P(i,7,6) \vee P(i,8,6) \vee P(i,9,6)\\
\wedge P(i,1,7) \vee P(i,2,7)\vee P(i,3,7) \vee P(i,4,7) \vee P(i,5,7) \vee P(i,6,7) \vee P(i,7,7) \vee P(i,8,7) \vee P(i,9,7)\\
\wedge P(i,1,8) \vee P(i,2,8)\vee P(i,3,8) \vee P(i,4,8) \vee P(i,5,8) \vee P(i,6,8) \vee P(i,7,8) \vee P(i,8,8) \vee P(i,9,8)\\
\wedge P(i,1,9) \vee P(i,2,9)\vee P(i,3,9) \vee P(i,4,9) \vee P(i,5,9) \vee P(i,6,9) \vee P(i,7,9) \vee P(i,8,9) \vee P(i,9,9)\\$$

## 第六十六题

* 在第六十四题的基础上，课后题需要我们解释书中给出的复合命题的构造步骤，该命题断言$9 * 9$数独谜题的每个$3 * 3$九宫格包含了每一个数。

$$\bigwedge^2_{r = 0} \bigwedge^2_{s = 0}\bigwedge^9_{n = 1} \bigwedge^3_{i = 1} \bigvee^3_{j = 1}p(3r+i,3s+j,n)$$

* 首先解释：为什么在这个公式中，r和s的取值范围是0-2，i和j的取值范围是1-3，n的取值范围不变，依旧是1-9。因为在九宫格中，每一个宫的每一行、每一列都被平均分为了三份，所以原本i和j的取值范围从1-9就变成了每一个宫的1-3；而第一个宫的第一个数的坐标是P（1,1,1）。当i和j的值都为1时，$P的坐标公式为：（3 * 0 + 1,3 * 0 + 1，1）$，由此可以推出r和s的取值范围都是0-2。这道题中，$3r+i$代表的纵着的行数，$3s+j$代表的是列数。

* 我们将式子$$\bigwedge^2_{r = 0} \bigwedge^2_{s = 0}\bigwedge^9_{n = 1} \bigwedge^3_{i = 1} \bigvee^3_{j = 1}p(3r+i,3s+j,n)$$展开可以得到：
