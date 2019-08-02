# 第二章节

## 第一题

* $e \rightarrow a$

## 第二题

* $m \rightarrow (e \vee p)$

## 第三题

* $g\rightarrow (r\wedge m\wedge b)$

## 第四题

* $(w \wedge \neg d)\rightarrow s$

## 第五题

* $e \rightarrow (a \wedge b) \vee (p \wedge r)$

## 第六题

* $u \rightarrow (b_{32} \wedge g_{1} \wedge r_{1} \wedge h_{16}) \vee (b_{64} \wedge g_{2} \wedge r_{2} \wedge h_{36})$

## 第七题

* a.$q \rightarrow p$
* b.$q \rightarrow \neg p$ 
* c.$q \rightarrow p$
* d.$\neg q \rightarrow \neg p$

## 第八题

* a.$r \wedge \neg p$
* b.$(r \wedge p) \rightarrow q$ 
* c.$\neg r \rightarrow \neg q$
* d.$(\neg p \wedge r) \rightarrow q$

## 第九题

* 令系统处于多用户状态为$a$，令系统运行正常为$b$，令核心程序起作用为$c$，令系统处于中断模式为$d$。
* 根据题意可得如下：$a \wedge b$,$b \rightarrow c$,$\neg a \vee d$,$\neg a \rightarrow d$,$\neg d$
* 不一致。要使所有五个规范说明为真的一个真值赋值必须包含$d$为假，从而使$\neg d$ 为真，因为我们要使$\neg a \rightarrow d$为真，但d必须为假，所以$\neg a$必须为假，则$a$为真；同理，我们要使$\neg c \vee d$为真，但$d$必须为假，所以$\neg c$必须为真，则$c$为假；要使$a \wedge b$为真，但a必须为真，则$b$也必须为真。由于当$b$为真且$c$为假时，$b \rightarrow c$为假，所以我们得出结论：这些规范说明不一致。

## 第十题

* 令每当对用户软件进行升级为$a$,令用户不能访问文件系统为$b$,令用户能保存新文件为$c$。
* 根据题意可得如下：$a \rightarrow b$,$\neg b \rightarrow c$,$\neg c \rightarrow \neg a$
* 不一致。要使所有三个规范为真的一个真值赋值，必须包含$a$为真，$b$为假，从而使$a \rightarrow b$为真，因为我们要使$\neg b \tightarrow c$为真，但$b$必须为假，则$\neg b$为真，从而得出$c$为真。由于当$c$为真而$a$为假时，$\neg c \rightarrow a$为真，所以我们得出结论这些规范说明一致。
