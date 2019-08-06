# 第二章节

## 第一题

* $\neg a \rightarrow e$

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

* 令系统处于多用户状态为$a$，令系统运行正常为$b$，令核心程序起作用为$c$
* 根据题意可得如下：$a \leftrightarrow b$,$b \rightarrow c$,$\neg c \vee \neg a$,$\neg a \vee a$,$a$

* 真值表为：
  |$a$|$b$|$c$|$\neg a$|$\neg c$|$a \leftrightarrow b$|$b \rightarrow c$|$\neg c \vee \neg a$|$\neg a \vee \neg a$|$a$|
  |----|----|----|----|----|----|----|----|----|----|
  |0|0|0|1|1|1|1|1|1|0|
  |0|0|1|1|0|1|1|1|1|0|
  |0|1|0|1|1|0|0|1|1|0|
  |0|1|1|1|0|0|1|1|1|0|
  |1|0|0|0|1|0|1|1|0|1|
  |1|0|1|0|0|0|1|0|0|1|
  |1|1|0|0|1|1|0|1|0|1|
  |1|1|1|0|0|1|1|0|0|1|

* 不一致。
  
## 第十题

* 令用户软件进行升级为$a$,令用户不能访问文件系统为$b$,令用户能保存新文件为$c$。
* 根据题意可得如下：$a \rightarrow b$,$\neg b \rightarrow c$,$\neg c \rightarrow \neg a$

* 真值表为：
  |$a$|$b$|$c$|$\neg a$|$\neg b$|$\neg c$|$a \rightarrow b$|$\neg b \rightarrow c$|$\neg c \rightarrow \neg a$|
  |----|----|----|----|----|----|----|----|----|
  |0|0|0|1|1|1|1|0|1|
  |0|0|1|1|1|0|1|1|1|
  |0|1|0|1|0|1|1|1|1|
  |0|1|1|1|0|0|1|1|1|
  |1|0|0|0|1|1|0|0|0|
  |1|0|1|0|1|0|0|0|1|
  |1|1|0|0|0|1|1|1|0|
  |1|1|1|0|0|0|1|1|1|

## 第十一题

* 令路由器向边缘系统发送分组为$a$,令路由器支持新的地址空间为$b$，令安装最新版本的软件为$c$。
* 根据题意可得如下：$a \rightarrow b$,$b \rightarrow c$,$c \rightarrow a$,$\neg b$

* 真值表为：
  |$a$|$b$|$c$|$a \rightarrow b$|$b \rightarrow c$|$c \rightarrow a$|$\neg b$|
  |----|----|----|----|----|----|----|
  |0|0|0|1|1|1|1|
  |0|0|1|1|1|0|1|
  |0|1|0|1|0|1|0|
  |0|1|1|1|1|0|0|
  |1|0|0|0|1|1|1|
  |1|0|1|0|1|1|1|
  |1|1|0|1|0|1|0|
  |1|1|1|1|1|1|0|

* 一致。

## 第十二题

* 令文件系统未加锁未$a$,令新消息将被排队为$b$,令系统正常运行为$c$
* 根据题意可得如下：$a \rightarrow b$,$a \leftrightarrow c$,$b \rightarrow d$,$a \rightarrow d$,$\neg d$
  
* 真值表为：
  |$a$|$b$|$c$|$d$|$a \rightarrow b$|$a \rightarrow c$|$b \rightarrow d$|$a \rightarrow d$|$\neg d$|
  |----|----|----|----|----|----|----|----|----|
  |0|0|0|0|1|1|1|
  |0|0|0|1|1|1|1|
  |0|0|1|0|1|1|1|
  |0|0|1|1|1|1|1|
  |0|1|0|0|1|1|
  |0|1|0|1|1|1|
  |0|1|1|0|1|1|
  |0|1|1|1|1|1|
  |1|0|0|0|0|0|
  |1|0|0|1|0|0|
  |1|0|1|0|0|1|
  |1|0|1|1|0|1|
  |1|1|0|0|1|0|
  |1|1|0|1|1|0|
  |1|1|1|0|1|1|
  |1|1|1|1|1|1|


  
