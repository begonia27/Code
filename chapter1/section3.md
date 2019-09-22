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
