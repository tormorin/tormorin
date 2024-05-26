### Hi there 👋,I'm tormorin.

- 🔭 I’m currently working on something cool.
- 🌱 I’m currently learning Everything I like.
- 💬 Ask me about anything related to Java/Python/C++.
- 📫 How to reach me: 2918737400@qq.com

![](https://github-readme-stats.vercel.app/api?username=tormorin&show_icons=true&theme=transparent)


You are my ![Visitor Count](https://profile-counter.glitch.me/wisdom-tormorin/count.svg) visitor,Thank You! :kissing_heart: :kissing_heart:


### 5.25 
#### 更新QT5界面编程
包括菜单栏，布局设计，信号与槽，模态对话框，主副窗口切换，通过ui和代码的方式分别实现一遍。主要是对菜单栏进行操作，增加了工具栏，实现了菜单栏按钮等功能，具体见MainWindow文件夹
#### 增加C++语法基础
##### const类型详解
const修饰变量时：变量的值不能被修改; <br> const修饰指针时：左定值右定向,即定义为常量指针时,如const int *p不能修改指向的变量的值（常量指针），定义为int *const p 时不能修改指向的变量，但指向的值可以修改（指向常量的指针）; <br> const修饰函数时:1.在形参指针前加const，意味着，形参指针指向的内存不能被改变，变量和形参指针虽然地址不同，但指向同一块内存。2.引用对象前加const(引用不是新定义一个变量，而是给已存在变量取了一个别名，编译器不会为引用变量开辟内存空间，它与引用的变量共用同一块内存空间。):
##### 引用的用法
引用不是新定义一个变量，而是给已存在变量取了一个别名，编译器不会为引用变量开辟内存空间，它与引用的变量共用同一块内存空间。
<br>定义引用时必须给初始化<br>
没有空引用<br>
没有所谓的二级引用<br>
一个变量可以有多个引用（就相当于一个变量有好几个别名，这是可以的)<br>
###### 指针和引用的区别
1.从语法规则上讲，指针变量存储某个实例(变量或对象）的地址;引用是某个实例的别名。<br>
2。程序为指针变量分配内存区域;而不为引用分配内存区域。<br>
3.解引用是指针使用时要在前加“*”;引用可以直接使用。<br>
4.指针变量的值可以发生改变，存储不同实例的地址;引用在定义时就被初始化，之后无法改变(不能是其他实例的引用)<br>
5.指针变量的值可以为空(NULL,nullptr);没有空引用。<br>
6.指针变量作为形参时需要测试它的合法性(判空NULL)；引用不需要判空。<br>
7.对指针变量使用"sizeof"得到的是指针变量的大小；对引用变量使用"sizeof"得到的是变量的大小。<br>
8.理论上指针的级数没有限制;但引用只有一级。即不存在引用的引用，但可以有指针的指针<br>
9.++引用与++指针的效果不一样<br>
