### Hi there 👋,I'm tormorin.

- 🔭 I’m currently working on something cool.
- 🌱 I’m currently learning Everything I like.
- 💬 Ask me about anything related to Java/Python/C++.
- 📫 How to reach me: 2918737400@qq.com

![](https://github-readme-stats.vercel.app/api?username=tormorin&show_icons=true&theme=transparent)


You are my ![Visitor Count](https://profile-counter.glitch.me/wisdom-tormorin/count.svg) visitor,Thank You! :kissing_heart: :kissing_heart:

- [日志](#日志)
  - [5.25](#5.25)
  - [5.26](#5.26)

# 日志
## 5.25 
### 更新QT5界面编程
包括菜单栏，布局设计，信号与槽，模态对话框，主副窗口切换，通过ui和代码的方式分别实现一遍。主要是对菜单栏进行操作，增加了工具栏，实现了菜单栏按钮等功能，具体见MainWindow文件夹
### 增加C++语法基础
#### const类型详解
1.const修饰变量时：变量的值不能被修改; 
<br>2.const修饰指针时：左定值右定向,即定义为常量指针时，如const int *p不能修改指向的变量的值（常量指针），定义为int *const p 时不能修改指向的变量，但指向的值可以修改（指向常量的指针）; 
<br>3.const修饰函数时:
<br>（1）在形参指针前加const，意味着，形参指针指向的内存不能被改变，变量和形参指针虽然地址不同，但指向同一块内存。
<br>（2）引用形参前加const:意味着不能修改形参的值；引用形参不会像普通形参那样直接复制实参的值，而是直接访问实参本身，可以提高代码效率。
<br>（3）const修饰函数返回值:意味着不能修改返回值。如果是普通的值传递，无需用const修饰返回值；如果是指针传递，接收返回值的变量必须被const修饰；如果返回值为引用，也可以提高效率。但是一般返回引用的地方并不是很多，一般会出现在类的赋值函数中。而且，用const 修饰返回值为引用类型的更少。一般来说不常用。
<br>4.const修饰引用时:常引用实际上是一种万能引用既可以引用普通变量 ,常量，也可以引用字面常量。引用常量时会显示不安全，可以使用常引用。
<br>5.const修饰成员函数时：const 修饰的成员函数为了保护成员变量，要求const 函数不能修改成员变量，否则编译会报错。函数体内不能修改成员变量的值，增加程序的健壮性或鲁棒性。只有成员函数才可以在后面加const，普通函数后加const无意义。
<br>6.const函数规则：
<br>(1)const 对象只能访问const 成员函数，非const 的对象可以访问任何成员函数，包括const 成员函数。
<br>(2)如果函数名、参数、返回值都相同的const成员函数和非const成员函数是可以构成重载，那么const对象调用const成员函数，非const对象默认调用非const的成员函数。
<br>(3)const成员函数可以访问所有成员变量，但是只能访问const的成员函数。
<br>(4)非const成员函数，可以访问任何成员，包括const成员成员函数。
<br>(5)const成员函数不能修改任何的成员变量，除非变量用mutable修饰。在成员函数中都会隐藏一个this指针，而this指针的本质是指针常量（不可以修改指针的指向）。 而const修饰成员函数时，实际上是const Person * const this这一语法。这就造成了指针的指向以及指向的值都不可以修改了。如果在const修饰成员函数时想对部分常函数

#### 引用的用法
引用不是新定义一个变量，而是给已存在变量取了一个别名，编译器不会为引用变量开辟内存空间，它与引用的变量共用同一块内存空间。
<br>1.定义引用时必须给初始化<br>
2.没有空引用<br>
3.没有所谓的二级引用<br>
4.一个变量可以有多个引用（就相当于一个变量有好几个别名，这是可以的)<br>
##### 指针和引用的区别
1.从语法规则上讲，指针变量存储某个实例(变量或对象）的地址;引用是某个实例的别名。<br>
2。程序为指针变量分配内存区域;而不为引用分配内存区域。<br>
3.解引用是指针使用时要在前加“*”;引用可以直接使用。<br>
4.指针变量的值可以发生改变，存储不同实例的地址;引用在定义时就被初始化，之后无法改变(不能是其他实例的引用)//即一个引用不能是两个变量的别名<br>
5.指针变量的值可以为空(NULL,nullptr);没有空引用。<br>
6.指针变量作为形参时需要测试它的合法性(判空NULL)；引用不需要判空。<br>
7.对指针变量使用"sizeof"得到的是指针变量的大小；对引用变量使用"sizeof"得到的是变量的大小。<br>
8.理论上指针的级数没有限制;但引用只有一级。即不存在引用的引用，但可以有指针的指针<br>
9.++引用与++指针的效果不一样<br>int main()<br>
(<br>
	int ar[5] = { 1,2,3，4,5 };<br>
	int* ip = ar; //数组首元素地址<br>
	int& b = ar[O]; //数组首元素的别名叫b<br>
	++ip;  //由0下标的地址指向1下标的地址<br>
	++b；  //由0下标指向1下标<br>
}<br>
10.对引用的操作直接反应到所引用的实体（变量或对象）。
对指针变量的操作，会使指针变量指向下一个实体(变量或对象）的地址;而不是改变所指实体(变量或对象)的内容。<br>
11.不可以对函数中的局部变量或对象以引用或指针方式返回。
当变量的生存期不受函数的影响时就可以返回地址
##### constexpr用法
C++11新标准规定，允许将变量声明为constexpr类型以便由编译器来验证变量的值是否是一个常量表达式。声明为constexpr的变量一定是一个常量，而且必须用常量表达式初始化<br>
常量表达式的值需要在编译时就得到计算，因此对声明constexpr时用到的类型必须有所限制。因为这些类型一般比较简单，值也显而易见、容易得到，就把它们称为“字面值类型”（literal type）。到目前为止接触过的数据类型中，算术类型、引用和指针都属于字面值类型。 尽管指针和引用都能定义成constexpr，但它们的初始值却受到严格限制。一个constexpr指针的初始值必须是nullptr或者0，或者是存储于某个固定地址中的对象。<br>
在constexpr声明中如果定义了一个指针，限定符constexpr仅对指针有效，与指针所指的对象无关。<br>
void pointer_constexpr()<br>
{<br>
    // p是一个指向整形常量的指针,p可以修改，但是*P不可修改<br>
    const int *p = nullptr;<br>
    // q是一个指向整形变量的常量指针,q不可修改,但是*q可以修改<br>
    constexpr int *q = nullptr;<br>
}<br>
p和q的类型相差甚远，p是一个指向常量的指针，而q是一个常量指针，其中的关键在于constexpr把它所定义的对象置为了顶层const。 与其他常量指针类似，constexpr指针既可以指向常量也可以指向一个非常量。

## 5.26
### C++语法基础
#### 类型别名
类型别名（type alias）是一个名字，它是某种类型的同义词。使用类型别名有很多好处，它让复杂的类型名字变得简单明了、易于理解和使用，还有助于程序员清楚地知道使用该类型的真实目的。有两种方法可用于定义类型别名。传统的方法是使用关键字typedef<br>
void typedef_func()<br>
{<br>
    // wages是double的同义词<br>
    typedef double wages;<br>
    // base是double的同义词， p 是double*的同义词<br>
    typedef wages base, *p;<br>
    // C11用法<br>
    using newd = double;<br>
    newd dd = 3.14;<br>
}<br>
新标准规定了一种新的方法，使用别名声明（aliasdeclaration）来定义类型的别名, using newd = double 就是通过using定义newd类型和double是相同的。<br>
#### auto推导
C++11新标准引入了auto类型说明符，用它就能让编译器替我们去分析表达式所属的类型。和原来那些只对应一种特定类型的说明符（比如double）不同，auto让编译器通过初始值来推算变量的类型。显然，auto定义的变量必须有初始值. 使用auto也能在一条语句中声明多个变量。因为一条声明语句只能有一个基本数据类型，所以该语句中所有变量的初始基本数据类型都必须一样.<br>
auto一般会忽略掉顶层const，同时底层const则会保留下来 要在一条语句中定义多个变量，切记，符号&和＊只从属于某个声明符，而非基本数据类型的一部分，因此初始值必须是同一种类型：
// k是int类型，l是int的引用<br>
// auto 忽略了顶层const<br>
auto k = ci, &l = i;<br>
// m是int常量的引用，p是指向int常量的指针<br>
// auto保留了底层const<br>
auto &m = ci, *p = &ci;<br>
// 错误 i的类型是int， ci的类型是 const int<br>
// auto &n = i, *p2 = &ci;<br>
#### decltype类型指示符
C++11新标准引入了第二种类型说明符decltype，它的作用是选择并返回操作数的数据类型。在此过程中，编译器分析表达式并得到它的类型，却不实际计算表达式的值<br>
decltype(size()) sum;<br>
编译器并不实际调用函数size，而是使用当调用发生时size的返回值类型作为sum的类型。换句话说，编译器为sum指定的类型是什么呢？就是假如size被调用的话将会返回的那个类型。decltype处理顶层const和引用的方式与auto有些许不同。如果decltype使用的表达式是一个变量，则decltype返回该变量的类型（包括顶层const和引用在内)<br>
void decltype_func()<br>
{<br>
    decltype(size()) sum;<br>
    const int ci = 0, &cj = ci;<br>
    // x的类型是const int<br>
    decltype(ci) x = 0;<br>
    // y的类型是 const int& , y绑定到变量x<br>
    decltype(cj) y = x;<br>
    //错误，z是一个引用，必须初始化<br>
    // decltype(cj) z;<br>
}<br>
因为cj是一个引用，decltype（cj）的结果就是引用类型，因此作为引用的z必须被初始化。需要指出的是，引用从来都作为其所指对象的同义词出现，只有用在decltype处是一个例外。如果decltype使用的表达式不是一个变量，则decltype返回表达式结果对应的类型.<br>
int i = 42, *p = &i, &r = i;<br>
// b1 是一个int类型的引用<br>
decltype(r) b1 = i;<br>
// r+0 通过decltype返回int类型<br>
decltype(r + 0) b2;<br>
//错误，必须初始化,c是int&类型<br>
// decltype(*p) c;<br>
