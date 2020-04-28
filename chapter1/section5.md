<!--author:fog
date:2020/1/20-->

# 第五节

## 第一题

1. 所有的 $x$ 都小于任意一个 $y$
2. 所有的 $x$ 和所有的 $y$ ，如果 $x >= 0$ 并且 $y >= 0$ ，那么 $x$ 和 $y$ 的乘积都为非负数
3. 所有的 $x$ 和所有的 $y$ 的乘积都等于任意一个 $z$

## 第二题

1. 任意一个 $x$ 和所有的 $y$ 的乘积都等于 $y$
2. 所有的 $x$ 和所有的 $y$ 的差大于 $0$
3. 所有的 $x$ 都等于所有的 $y$ 和任意一个 $z$ 的和

## 第三题

1. 班上存在一个学生 $x$ 和 班上存在一个学生 $y$ ， $x$ 已经发送电子邮件给 $y$了
2. 班上存在一个学生 $x$ 和 班上所有的学生 $y$ ，一个学生 $x$ 已经所有的学生 $y$ 发送过邮件了
3. 班上的所有学生 $x$ 都已经发电子邮件消息给至少一个学生 $y$ 了
4. 班上的一个学生 $y$ 被班上所有的学生 $x$ 发送过电子邮件消息
5. 班上的所有学生 $y$ 都被班上的一个学生 $x$ 发送过电子邮件消息
6. 班上的所有学生 $x$ 都已经发电子邮件消息给班上的所有学生 $y$ 了

## 第四题

1. 存在一个学生 $x$ 选修了一门课程 $y$
2. 存在一个学生 $x$ 选修了所有的课程 $y$
3. 所有的学生 $x$ 都选修了一门课程 $y$
4. 至少有一门课程 $y$ 被所有的学生 $x$ 选修了
5. 所有的课程 $y$ 都至少被一个学生 $x$ 选修了
6. 班上的所有学生 $x$ 都选修了所有的课程 $y$

## 第五题

1. 学生 $Sarah Smith$ 访问过网站 $www.att.com$
2. 存在一个学生 $x$ 访问过网站 $www.imdb.org$
3. 存在一个学生 $Jose Orez$ 访问过至少一个网站
4. 存在一个网站 $y$ 被 $Ashok Puri$ 和 $Cindy Yoon$ 都访问过
5. 存在一个人 $y$ 和所有的网站 $z$ ，如果 $y$ 和 $David Belcher$ 不是同一个人，并且 $David Belcher$ 访问过 $z$ ，那么 $y$ 也访问过 $z$
6. 存在一个人 $x$ 和存在一个人 $y$ 以及所有的网站 $z$ ，如果 $x$ 和 $y$ 不是同一个人，并且 $x$ 访问过$z$ 当且仅当 $y$ 也访问过 $z$

## 第六题

1. 学生 $Randy Goldberg$ 注册了课程 $CS252$
2. 存在一个学生 $x$ 注册了课程 $Math 695$
3. 学生 $Carol$ 注册了一个课程 $y$
4. 存在一个学生 $x$ 注册了课程 $Math222$ 和课程 $CS252$
5. 存在一个学生 $x$ 和存在一个学生 $y$ 以及所有的课程 $z$ ，如果 $x$ 和 $y$ 不是同一个人，并且 $x$ 注册了课程 $z$ ，那么 $y$ 也注册了课程 $z$
6. 存在一个学生 $x$ 和存在一个学生 $y$ 以及所有的课程 $z$ ，如果 $x$ 和 $y$ 不是同一个人，并且 $x$ 注册了课程 $z$ 当且仅当 $y$ 也注册了课程 $z$

## 第七题

1. 学生 $Abdallah Hussein$ 不喜欢菜肴 $Japanese$
2. 存在一个学生 $x$ 喜欢菜肴 $Korean$ 并且所有的学生 $x$ 都喜欢菜肴 $Mexican$
3. 存在一个菜肴被 $Monique Arsenault$ 或者 $Jay Johnson$ 喜欢
4. 所有的学生 $x$ 和所有的学生 $z$ 以及存在一个菜肴 $y$ ，如果 $x$ 和 $z$ 不是同一个人，那么 $x$ 和 $z$ 都不喜欢菜肴 $y$
5. 存在一个学生 $x$ 和存在一个学生 $z$ 以所有的菜肴 $y$ ， $x$ 喜欢菜肴 $y$ 当且仅当 $z$ 也喜欢菜肴 $y$
6. 所有的学生 $x$ 和所有的学生 $z$ 以及存在一个菜肴 $y$ ， $x$ 喜欢菜肴 $y$ 当且仅当 $z$ 也喜欢菜肴 $y$

## 第八题

1. $\exists x \exists y Q(x,y)$
2. $\neg \exists x \exists y Q(x,y)$
3. $\exists x (Q(x,Jeopardy) \wedge Q(x,Wheel of Fortune))$
4. $\forall y \exists x Q(x,y)$
5. $\exists x \exists y (Q(x,Joepardy) \wedge Q(y,Joepardy))$

## 第九题

1. $\forall x L(x,Jerry)$
2. $\forall x \exists y L(x,y)$
3. $\exists y \forall x L(x,y)$
4. $\forall x \exists y \neg L(x,y)$
5. $\exists x \neg L(Lydia,y)$
6. $\exists x \forall y \neg L(x,y)$
7. $\exists x (\forall y L(x,y) \wedge z ((\forall w L(w,z)) \rightarrow z = x)$
8. $\exists x \exists y (x \not = y \wedge L(Lynn,x) \wedge \forall z (L(Lynn,z) \rightarrow (z = x \vee z = y)))$
9. $\forall x L(x,x)$
10. $\exists x \forall y (L(x,y) \rightarrow x = y)$

## 第十题

1. $\forall x F(x,Fred)$
2. $\forall y F(Evelyn,y)$
3. $\forall x \exists y F(x,y)$
4. $\neg \exists x \forall y F(x,y)$
5. $\forall y \exists x F(x,y)$
6. $\neg \exists x \exists y (F(x,Fred) \wedge F(Jerry))$
7. $\exists y1 \exists y2 (F(Nancy,y1) \wedge F(Nancy,y2) \wedge y1 \not = y2 \wedge \forall (F(Nancy,y) \rightarrow (y = y1 \vee y = y2)))$
8. $\exists y \forall x (F(x,y) \wedge \forall z (\forall x F(x,z) \rightarrow z = y))$
9. $\neg \exists x F(x,x)$
10. $\exists x \exists y (x \not = y \wedge F(x,y) \wedge \forall z(F(x,z) \wedge z \not = x) \rightarrow z = y))$

## 第十一题

1. $A(Lois,Michaels教授)$
2. $\forall x (s(x) \rightarrow A(x,Gross教授))$
3. $\forall x (F(x) \rightarrow A(x,Miller教授) \vee A(Miller教授,x))$
4. $\exists x (s(x) \wedge (\forall y (F(y) \rightarrow \neg A(x,y))))$
5. $\exists x (F(x) \wedge (\forall y (S(y) \rightarrow A(x,y))))$
6. $\forall x (F(y) \wedge (\exists x (s(x) \vee A(x,y))))$
7. $\exists x (F(x) \wedge (\forall y (F(y) \wedge (y \not = x) \rightarrow A(x,y))))$
8. $\exists x (s(x) \wedge (\forall y (F(y) \rightarrow \neg A(y,x))))$

## 第十二题

1. $\neg I(Jerry)$
2. $\neg C(Rachel,Chelsea)$
3. $\neg C(Jan,Sharon)$
4. $\neg \exists x C(x,Bob)$
5. $\forall x (x \not = Joseph) \leftrightarrow C(x,Sanjay)$
6. $\exists x \neg I(x)$
7. $\neg \forall x I(x)$
8. $\exists x \forall y (x = y \leftrightarrow I(y))$
9. $\exists x \forall y (x \not = y \leftrightarrow \neg I(y))$
10. $\forall x (I(x) \rightarrow \exists y (x \not = y \wedge C(x,y)))$
11. $\exists x (I(x) \wedge (\forall y (y \not = x) \rightarrow \neg C(x,y))$
12. $\exists x \exists y (x \not = y \wedge \neg C(x,y)))$
13. $\exists x \forall y C(x,y)$
14. $\exists x \exists y (x \not = y \wedge \forall z \neg (C(x,z) \wedge C(y,z)))$
15. $\exists x \exists y (x \not = y \wedge \wedge \forall z \rightarrow C(x,z) \vee C(y,z))$

## 第十三题

1. $\neg M(Chou,Koko)$
2. $\neg M(Arlene,Sarah) \vee \neg T(Arlene,Sarah)$
3. $\neg M(Deborah,Jose)$
4. $\forall x M(x,Ken)$
5. $\forall x \neg T(x,Nina)$
6. $\forall x (T-x,Avi) \vee M(x,Avi))$
7. $\exists x \forall y (y \not = x \rightarrow M(x,y))$
8. $\exists x \forall y (y \not = x \rightarrow (M(x,y) \vee T(x,y)))$
9. $\exists x \exists y (x \not = y \wedge M(x,y) \wedge M(y,x))$
10. $\exists (M(x,x)$
11. $\exists x \forall y (x \not = y \rightarrow (\neg M(y,x) \vee \neg T(y,x))$
12. $\exists x \exists y (x \not = y \rightarrow (\neg M(x,y) \wedge \neg T(y,x))$
13. $\exists x \exists y (x \not = y \wedge \forall z ((M(x,z) \vee T(y,z)) \vee (T(x,z) \vee M(y,z))))$

## 第十四题

1. $\exists x S(x,Hindi)$（其中 $S(x,Hindi)$ 表示学生 $x$ 会说印地语 $y$）
2. $\forall x \exists y S(x,y)$ （其中 $S(x,y)$ 表示学生 $x$ 会玩运动项目 $y$）
3. $\exists x (T(x,alaska) \wedge \neg T(x,hawaii))$ （其中 $T(x,alaska)$ 表示学生 $x$ 去过阿拉斯加， $\neg (x,hawaii)$ 表示学生 $x$ 没去过夏威夷）
4. $\forall x \exists y L(x,program)$ （其中 $x$ 为所有学生的集合，$y$ 为所有程序设计语言的集合）
5. $\exists x \exists z \forall y (O(y,z) \rightarrow T(x,y))$ （其中 $x$ 为所有学生的集合， $y$ 为所有课程的集合）
6. $\exists x \exists y ((x \not = y \wedge G(x,y) \wedge (G(x,z)) \rightarrow (x = y \vee x = z)))$ （其中 $x$ 和 $y$ 为所有学生的集合， $city$ 为一个地区的一个城市）
7. $\forall x \exists y \exists z ( x \not = y \wedge C(x,y,z))$ （其中 $x$ 和 $y$ 为所有学生的集合， $z$ 为所有聊天组的集合）
  
## 第十五题

1. $\forall x P(x))$ （其中 $P(x))$ 为每个计算机学科的学生，论域为所有计算机科学的学生）
2. $\exists x (C(x))$ （其中 $C(x)$ 为学生拥有个人计算机，论域为班上所有的学生）
3. $\forall x \exists y L(x,y)$ （其中 $L(x,y)$ 为学生选修了计算机科学课程， $x$ 的论域为班上所有的学生， $y$ 的论域为计算机科学课程）
4. $\exists x \exists y L(x,y)$ （其中 $L(x,y)$ 为学生选修了计算机科学课程， $x$ 的论域为班上所有的学生， $y$ 的论域为计算机科学课程）
5. $\forall x \forall y V(x,y)$ （其中 $V(x,y)$ 为学生去过建筑，$x$ 的论域为班上所有的学生， $y$ 的论域为校园内所有的楼房）
6. $\exists x \exists y \forall z (P(z,y) \rightarrow Q(x,z))$ （其中 $P(z,y)$ 为学生去过楼里的房间，$Q(x,z)$ 为 $x$ 去过 $z$ ，$x$ 的论域为班上所有的学生， $y$ 的论域为校园内所有的楼房， $z$ 的论域为所有的房间）
7. $\forall x \forall y \exists z (P(z,y) \wedge Q(x,z))$ （其中 $P(z,y)$ 为学生去过楼里的房间，$Q(x,z)$ 为 $x$ 去过 $z$ ，$x$ 的论域为班上所有的学生， $y$ 的论域为校园内所有的楼房， $z$ 的论域为所有的房间）

## 第十六题

1. $\exists x S(x,3)$ （真值为真）
2. $\forall x \exists y C(x,y,computer science)$ （真值为假）
3. $\exists x \neg (M(x) \wedge (x,3))$ （真值为真）
4. $\forall x (\exists c P(s,c,computer science) \vee \exists m P(s,soohomore,m))$ （真值为假）
5. $\exists x \forall y \exists z ((x,y,z))$ （真值为假）

## 第十七题

1. $\forall x \forall y (M(x,y) \wedge ((z \not = y) \rightarrow \neg M(x,z)))$ （其中 $M(x)$ 为用户 $x$ 已经访问过邮箱 $y$）
2. $\exists x \forall y R(x) \rightarrow S(z,t)$ （其中 $R(x)$ 表示错误条件 $x$ 有效， $R(z,t)$ 表示内核运行正确）
3. $\forall x \forall y I(s,edu) \rightarrow A(u,s))$ （其中 $I(s,edu)$ 表示站点 $s$ 具有 $edu$ 扩展， A(u,s) 为用户 $u$ 可访问站点 $s$）
4. $\exists x \exists y (x \not = y \wedge \forall z ((\forall s M(z,s)) \rightarrow (z = x \vee z = y)))$ （其中 $M(a,b)$ 为系统 $a$ 监控服务器 $b$）

## 第十八题

1. $\forall x (H(x) \rightarrow \exists y A(y))$ （其中 $A(y)$ 为故障情形下，控制台可以访问）
2. $\forall u \exists m F(u,m) \wedge S(u,m)) \rightarrow \forall u R(u)$ （其中 $F(u,m)$ 为档案文件的用户发送消息， $S(u,m)$ 为文档包含1条消息， $R(u,w)$ 为用户地址被检测到）
3. $\forall b \exists m D(m,b) \leftrightarrow \neg p \neg C(p)$ （其中 $D(m,b)$ 为机制可以检测漏洞， $C(p)$ 为进程受到损害）
4. $\forall x \forall y (x \not = y \rightarrow \exists p \exists q (p \not = q \wedge C(p,x,y) ]wedge C(q,x,y)))$ （其中 $C(p,x,y)$ 为路径连接端点）
5. $\forall x ((\forall u K(x,u)) \leftrightarrow x = SysAdm)$ （其中 $K(x,y)$ 为有人知道用户的口令， $B(y,z)$ 为系统上的用户的口令， $C(p,q)$ 为系统管理员知道用户的口令）

## 第十九题

1. $\forall x \forall y ((x < 0) \wedge (y < 0) \rightarrow (x + y < 0))$
2. $\neg \forall x \forall y ((x > 0) \wedge (y > 0) \rightarrow (x - y > 0))$
3. $\forall x \forall y ((x ^{2} + y ^{2}) - (x + y) ^ 2 \geq 0)$
4. $\forall x \forall y (|x *y | = |x|*|y|)$

## 第二十题

1. $\forall x \forall y ((x < 0) *(y < 0) \rightarrow (x* y > 0)$)
2. $\forall x \forall y ((x > 0) + (y > 0) \rightarrow ((x - y) /2 > 0))$
3. $\exists x \exists y (((x < 0) - (y < 0)) \wedge (x - y \geq 0))$
4. $\forall x \forall y (|x + y| - (|x| + |y| < 0))$

## 第二十一题

$\forall x \exists a \exists b \exists c \exists d((x > 0) \rightarrow x = (a^{2} + b^{2} + c^{2} + d^{2})$ （其中论域为全体整数）

## 第二十二题

$\exists x \forall a \exists b \forall c= ! (a^{2} + b^{2} + c^{2})$（其中论域为全体整数）

## 第二十三题

1. $\forall x \forall y ((x < 0) \wedge (y < 0) \rightarrow (x * y > 0))$
2. $\exists x P(x - x) = 0$
3. $\forall x \exists b \exists c (a \not = b \wedge \forall c (c ^ {2} = x \leftrightarrow c =a \vee c = b))$
4. $\forall x (x < 0) \rightarrow \neg \exists y (x = y ^ {2})$

## 第二十四题

1. 存在一个实数和所有的实数想加都等于所有数
2. 所有的非负数与所有的负数之差都为正数
3. 存在两个非正数的差是正数
4. 两个不为零的数的乘积也不为零

## 第二十五题

1. 实数具有乘法单位元
2. 两个负数的乘积是正数
3. 存在两个实数 $x$ 和 $y$ ， $x$ 小于 $y$ 并且 $x^{2}$ 大于 $y$
4. 所有的实数相加的和还是所有实数（实数在加法运算下是封闭的）

## 第二十六题

1. $F$
2. $T$
3. $F$
4. $F$
5. $T$
6. $T$
7. $T$
8. $F$
9. $F$

## 第二十七题

1. $T$
2. $T$
3. $T$
4. $T$
5. $T$
6. $F$
7. $F$
8. $T$
9. $F$

## 第二十八题

1. $T$
2. $F$
3. $T$
4. $F$
5. $T$
6. $F$
7. $T$
8. $F$
9. $F$
10.$T$

## 第二十九题

1. $(1,1) \wedge (1,2) \wedge (1,3) \wedge (2,1) \wedge (2,2) \wedge (2,3) \wedge (3,1) \wedge (3,2) \wedge (3,3)$
2. $(1,1) \vee (1,2) \vee (1,3) \vee (2,1) \vee (2,2) \vee (2,3) \vee (3,1) \vee (3,2) \vee (3,3)$
3. $(1,1) \wedge (1,2) \wedge (1,3) \vee (2,1) \wedge (2,2) \wedge (2,3) \vee (3,1) \wedge (3,2) \wedge (3,3)$
4. $(1,1) \vee (2,1) \vee (3,1) \wedge (1,2) \vee (2,2) \vee (3,2) \wedge (1,3) \vee (2,3) \vee (3,3)$

## 第三十题

1. $\forall y \forall x \neg P(x,y)$
2. $\exists x \forall y \neg P(x,y)$
3. $\forall y (\neg Q(y) \vee \exists x R(x,y))$
4. $\forall y (\forall x \neg R(x,y) \wedge \exists \neg S(x,y))$
5. $\forall y (\exists x \forall z \neg T(x,y,z) \wedge \forall x \exists z \neg U(x,y,z))$

## 第三十一题

1. $\exists x \forall y \exists z \neg T(x,y,z)$
2. $\exists x \forall y \neg P(x,y) \wedge \exists x \forall y Q(x,y)$
3. $\exists x \forall y (\neg P(x,y) \vee \forall z \neg R(x,y,z))$
4. $\exists x \forall y (P(x,y) \wedge (\neg Q(x,y)))$

## 第三十二题

1. $\forall z \exists y \exists x \neg T(x,y,z)$
2. $\forall x \forall y \neg P(x,y) \vee \exists x \exists y \neg Q(x,y)$
3. $\forall x \forall y (Q(x,y) leftrightarrow \neg Q(x,y))$
4. $\exists y \exists x \forall z (\neg T(x,y,z) \wedge (\neg Q(x,y)))$
  
## 第三十三题

1. $\exists x \exists y \neg P(x,y)$
2. $\exists y \forall x \neg P(x,y)$
3. $\exists y \exists x (\neg P(x,y) \wedge \neg Q(x,y))$
4. $\forall x \forall y P(x,y) \vee \exists x \exists y \neg Q(x,y)$
5. $\exists x (\forall y \exists z \neg P(x,y,z) \vee \forall z \exists y \neg P(x,y,z))$

## 第三十四题

1. 使语句为真的论域为：小于 $2$ 的正整数
2. 使语句为假的论域为：小于 $6$ 的正正数

## 第三十五题

1. 使语句为真的论域为：小于 $3$ 的正数
2. 使语句为假的论域为：小于 $4$ 的正数

## 第三十六题

1. $\neg \exists x \exists y (y > 1000 \wedge L(x,y)$
2. 取否定：$\exists x \exists y (y > 1000 \wedge L(x,y)$
3. 翻译：有一些玩彩票的人输过 $1000$ 多美元

4. $\exists x \exists y (y \not = x \wedge \forall z(z \not = x \rightarrow (z = y \leftrightarrow C(x,z))))$
5. 取否定：$\forall x \forall y (y \not = x \rightarrow \exists z(z \not = x \rightarrow (z = y \leftrightarrow C(x,z))))$
6. 翻译：班上所有的学生 $x$ 和所有的学生 $y$ 中，如果 $x$ 没有和 $y$ 交谈过，并且如果所有的 $z$ 和 $x$ 或 $y$ 不是同一个人，那么 $z$ 和 $y$ 交谈过

7. $\neg \exists x \exists y \exists z(y \not = z \wedge x \not = y \wedge x \not = z \wedge \forall w (w \not = x \rightarrow (E(x,w) \leftrightarrow (w = y \vee w = z))))$
8. 取否定：$\exists x \exists y \exists z(y \not = z \wedge x \not = y \wedge x \not = z \wedge \forall w (w \not = x \rightarrow (E(x,w) \leftrightarrow (w = y \vee w = z))))$
9. 翻译：班上有一些学生 $x$ 给另外两个学生 $y$ 和 $z$ 发过电子邮件

10. $\exists x \forall y K(b,y)$
11. 取否定：$\forall x \exists y \neg K(b,y)$
12. 翻译：所有的学生 $x$ 都不求解本书中的一道练习题

13. $\neg \exists s \forall q \exists p (B(y,z) \wedge S(x,y))$
14. 取否定：$\exists s \forall q \exists p (B(y,z) \wedge S(x,y))$
15. 翻译：有一些学生 $s$ 都没有求解过本书中的每节里的至少一道练习题

## 第三十七题

1. $\forall x \exists y (L(x,y) \wedge (\forall z (z \not = y) \rightarrow \neg L(y,z)))$
2. 取否定：$\exists x \forall y (\neg L(x,y) \vee (\forall z (z \not = y) \wedge L(y,z)))$
3. 翻译：班上存在一个学生 $x$ ， 他没有恰好同时选修过本校的两门数学课，或者如果 $y$ 和 $z$ 不是同一个学科，那么 $x$ 选修过本校的两门数学课

4. $\exists x \forall y (\neg V(c,l) \wedge V(c,y))$
5. 取否定：$\forall x \exists y (V(c,l) \vee \neg (V(c,y)))$
6. 翻译：所有人要么去过利比亚，要么没去过除了利比亚以外的任何国家

7. $\neg \exists x \forall m V(h,m)$
8. 取否定：$\exists x \forall m \neg V(h,m)$
9. 翻译：有一个人没有攀登过喜马拉雅的每座山峰

10. $\forall x (\exists y F(x,Kecvin Bacon) \vee (\exists z F(Kevin Bacon,z) \wedge \exists z F(x,z)))$
11. 取否定：$\exists x (\forall y \neg F(x,Kevin Bacon) \wedge (\forall z \neg F(Kevin Bacon,z) \vee \forall z \neg F(x,z)))$
12. 翻译：有位电影演员没有与 $Kevin Bacon$ 拍过电影，并且他也没有和所有和 $Kevin Bacon$ 拍过电影的人拍过电影

## 第三十八题

1. $\forall s L(m)$
2. 取否定：$\exists s \neg L(m)$
3. 翻译：班上有一个学生不喜欢数学

4. $\exists s \neg K(c)$
5. 取否定：$\forall s K(c)$
6. 翻译：班上所有的学生都见过计算机

7. $\exists s \forall m L(s,m)$
8. 取否定：$\forall s \exists m \neg L(s,m)$
9. 翻译：班上所有的学生都没有选修过本校开设的一门数学课

10. $\exists s \forall b \exists h A(s,b,n)$
11. 取否定：$\forall s \exists b \forall h \neg A(s,b,n)$
12. 翻译：班上所有的学生都没有去过一座楼的所有房间

## 第三十九题

1. 反例： $x = 1,y = 1$
2. 反例： $x = -1,y = 2$
3. 反例： $x = 10,y = -2$

## 第四十题

1. 反例： $x = 1,y = 0$
2. 反例： $x = 1,y = 50$
3. 反例： $x = 1,y = 1$

## 第四十一题

$\forall x \forall y \forall z ((x *y)*z \equiv x *(y*z))$

## 第四十二题

$\forall a \forall b \forall c ((a + b) *c \equiv a*c + b * c)$

## 第四十三题

$\forall m \forall b (m \not = 0 \rightarrow \exists x (mx + b = 0 \wedge \forall w (mw + b = 0 \rightarrow w = x)))$

## 第四十四题

$\forall a \forall b \forall c (a \not = 0 \rightarrow \forall x1 \forall x2 \forall x3 (ax_{1}^{2} + bx_{1} + c = 0 \wedge ax_{1}^{2} + bx_{1} +c = 0 \wedge ax_{3}^{2} + bx_{3} +c =0) \rightarrow (x_{1} = x_{2} \vee x_{1} = x_{3} \vee x_{2} = x_{3}))$

## 第四十五题

1. $T$
2. $F$
3. $T$

## 第四十六题

1. $F$
2. $T$
3. $T$

## 第四十七题

对 $\neg \exists x \forall y P(x,y)$ 进行化简后可得： $\forall x \exists y \neg P(x,y)$ ， 由于 $\neg \exists x \forall y P(x,y)$ 和 $\forall x \exists \neg P(x,y)$相等，所以 $\neg \exists x \forall y P(x,y) \equiv \forall x \exists \neg P(x,y)$

## 第四十八题

在 $\forall x P(x) \vee \forall x Q(x) \equiv \forall x \forall y (P(x) \wedge Q(y))$ 中，当左边的 $x$ 为真，右边的 $x$ 为真时，该式子为真；当左边的 $x$ 为真，右边的 $x$ 为假时，该式子为真；当左边的 $x$ 为假，右边的 $x$ 为真时，该式子为真；当左边的 $x$ 为假，右边的 $x$ 为假时，该式子为真。所以 $\forall x P(x) \vee \forall x Q(x) \equiv \forall x \forall y (P(x) \wedge Q(y))$

## 第四十九题

1. 在 $\forall x P(x) \wedge \exists x Q(x) \equiv \forall x \exists y (P(x) \wedge Q(y))$ 中，假定 $\forall x \exists y (P(x) \wedge Q(y))$ 为真，则所有的 $P(x)$ 对 $x$ 都为真，并且有一个 $y$ 使得 $Q(y)$ 为真，因为 $P(x) \wedge Q(y)$ 为所有的 $x$ 为真，并且有一个 $y$ 使得 $(P(x) \wedge Q(y))$ 为真,所以 $\forall x \exists y (P(x) \wedge Q(y))$ 为真；反之，假定 $\forall x \exists y (P(x) \wedge Q(y))$ 为真，令 $x$ 为论域中的一个元素，存在一个 $y$ 使得 $Q(y)$ 为真，所以 $\exists x Q(x)$ 为真，因为 $\forall x P(x)$ 也为真，可得出第一个命题也为真

2. 假定 $\forall x P(x) \vee \exists x Q(x)$ 为真，则所有的 $x$ 对 $P(x)$ 为真，或者有一个 $y$ 使得 $Q(y)$ 为真，在“所有的 $x$ 对 $P(x)$ 为真”这种情况中，$P(x) \vee Q(y)$ 对所有的 $x$ 为真，在“有一个 $y$ 使得 $Q(y)$ 为真”这种情况中，对特定的 $y$ 使 $Q(y)$ 为真，所以 $P(x) \vee Q(y)$ 对所有的 $x$ 为真，从而 $\forall x \exists y (P(x) \vee Q(x))$ 为真。反之，假定 $]forall x \exists y (P(x) \vee Q(y))$ 为真。如果 $P(x)$ 对所有的 $x$ 为真，则第一个命题为真；如果不是，则 $P(x)$ 对某个 $x$ 为假，对该 $x$ 必存在一个 $y$ 使 $P(x) \vee Q(y)$ 为真，所以 $Q(y)$ 必为真，所以 $\exists x Q(y)$ 也为真，所以 $\forall x P(x) \vee \exists x Q(x)$ 为真

## 第五十题

1. $\exists x (P(x) \vee Q(x) \vee A)$
2. $\exists x \exists y P(x) \neg (P(x) \wedge Q(x))$
3. $\forall x \exists y (\neg P(x) \vee Q(y))$

## 第五十一题

我们将要说明如何将表达式转换为前束范式，如果其子表达式可转换为前束范式，则任何一个表达式都可以从里到外转换为前束范式。由 $1.4$ 节的练习 $45$ 可知，可以假定命题中只使用逻辑联结符 $\vee$ 和 $\neg$ 。注意不带量词的命题本身就是前束范式形式。现在假定命题形如 $QxP(x)$ ，其中 $Q$ 为量词。因为 $P(x)$ 是比原命题短的表达式，所以可以将它转换为 $PNF$ 。$Qx$ 后面跟上这 $PNF$ 仍然是一个 $PNF$ ，且等价于原命题。其次，假定命题形如 $\neg P$ 。如果 $P$ 已经是 $PNF$ 形式，则我们可以用 $1.4$ 节表 $2$ 的等价式把否定符号穿过所有量词，则用 $1.4$ 节练习 $46$ 可以把量词移到它们两个的前面。如果 $P$ 和 $Q$ 均含量词，可以用 $1.4$ 节练习 $45$ 、练习 $48$ 或练习 $49$ $b$ 重写 $P \vee Q$ 使两个量词都出现在形如 $R \vee S$ 的析取命题之前，然后再把 $R \vee S$ 转换为 $PNF$ 。

## 第五十二题

$\exists ! x P(x) \equiv \exists (P(x) \wedge (\forall y (y \not = x) \rightarrow \neg P(y)))$
