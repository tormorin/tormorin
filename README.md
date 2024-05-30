### Hi there 👋,I'm tormorin.

- 🔭 I’m currently working on something cool.
- 🌱 I’m currently learning Everything I like.
- 💬 Ask me about anything related to Java/Python/C++.
- 📫 How to reach me: 2918737400@qq.com

![](https://github-readme-stats.vercel.app/api?username=tormorin&show_icons=true&theme=transparent)


You are my ![Visitor Count](https://profile-counter.glitch.me/wisdom-tormorin/count.svg) visitor,Thank You! :kissing_heart: :kissing_heart:

- [日志](#日志)
- [5.25](#525)
- [5.26](#526)
- [5.27](#527)
- [5.28](#528)
- [5.29](#529)
- [5.30](#530)

# 日志
# 5.25 
### 更新QT5界面编程
包括菜单栏，布局设计，信号与槽，模态对话框，主副窗口切换，通过ui和代码的方式分别实现一遍。主要是对菜单栏进行操作，增加了工具栏，实现了菜单栏按钮等功能，具体见MainWindow文件夹
### 增加C++语法基础
#### const类型详解
1.const修饰变量时：变量的值不能被修改; 
<br>2.const修饰指针时：左定值右定向,即定义为常量指针时，如const int *p不能修改指向的变量的值（常量指针），定义为int *const p 时不能修改指向的变量，但指向的值可以修改（指向常量的指针）; 
<br>3.const修饰函数时:
<br> （1）在形参指针前加const，意味着，形参指针指向的内存不能被改变，变量和形参指针虽然地址不同，但指向同一块内存。
<br> （2）引用形参前加const:意味着不能修改形参的值；引用形参不会像普通形参那样直接复制实参的值，而是直接访问实参本身，可以提高代码效率。
<br> （3）const修饰函数返回值:意味着不能修改返回值。如果是普通的值传递，无需用const修饰返回值；如果是指针传递，接收返回值的变量必须被const修饰；如果返回值为引用，也可以提高效率。但是一般返回引用的地方并不是很多，一般会出现在类的赋值函数中。而且，用const 修饰返回值为引用类型的更少。一般来说不常用。
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
9.++引用与++指针的效果不一样
```
int main()
{
	int ar[5] = { 1,2,3，4,5 };
	int* ip = ar; //数组首元素地址
	int& b = ar[O]; //数组首元素的别名叫b
	++ip;  //由0下标的地址指向1下标的地址
	++b；  //由0下标指向1下标
}
```
10.对引用的操作直接反应到所引用的实体（变量或对象）。
对指针变量的操作，会使指针变量指向下一个实体(变量或对象）的地址;而不是改变所指实体(变量或对象)的内容。<br>
11.不可以对函数中的局部变量或对象以引用或指针方式返回。
当变量的生存期不受函数的影响时就可以返回地址
##### constexpr用法
C++11新标准规定，允许将变量声明为constexpr类型以便由编译器来验证变量的值是否是一个常量表达式。声明为constexpr的变量一定是一个常量，而且必须用常量表达式初始化<br>
常量表达式的值需要在编译时就得到计算，因此对声明constexpr时用到的类型必须有所限制。因为这些类型一般比较简单，值也显而易见、容易得到，就把它们称为“字面值类型”（literal type）。到目前为止接触过的数据类型中，算术类型、引用和指针都属于字面值类型。 尽管指针和引用都能定义成constexpr，但它们的初始值却受到严格限制。一个constexpr指针的初始值必须是nullptr或者0，或者是存储于某个固定地址中的对象。<br>
在constexpr声明中如果定义了一个指针，限定符constexpr仅对指针有效，与指针所指的对象无关。<br>
```
void pointer_constexpr()
{
    // p是一个指向整形常量的指针,p可以修改，但是*P不可修改
    const int *p = nullptr;
    // q是一个指向整形变量的常量指针,q不可修改,但是*q可以修改
    constexpr int *q = nullptr;
}
```
p和q的类型相差甚远，p是一个指向常量的指针，而q是一个常量指针，其中的关键在于constexpr把它所定义的对象置为了顶层const。 与其他常量指针类似，constexpr指针既可以指向常量也可以指向一个非常量。

# 5.26
### C++语法基础
#### 类型别名
类型别名（type alias）是一个名字，它是某种类型的同义词。使用类型别名有很多好处，它让复杂的类型名字变得简单明了、易于理解和使用，还有助于程序员清楚地知道使用该类型的真实目的。有两种方法可用于定义类型别名。传统的方法是使用关键字typedef<br>
```
void typedef_func()
{
    // wages是double的同义词
    typedef double wages;
    // base是double的同义词， p 是double*的同义词
    typedef wages base, *p;
    // C11用法
    using newd = double;
    newd dd = 3.14;
}
```
新标准规定了一种新的方法，使用别名声明（aliasdeclaration）来定义类型的别名, using newd = double 就是通过using定义newd类型和double是相同的。<br>
#### auto推导
C++11新标准引入了auto类型说明符，用它就能让编译器替我们去分析表达式所属的类型。和原来那些只对应一种特定类型的说明符（比如double）不同，auto让编译器通过初始值来推算变量的类型。显然，auto定义的变量必须有初始值. 使用auto也能在一条语句中声明多个变量。因为一条声明语句只能有一个基本数据类型，所以该语句中所有变量的初始基本数据类型都必须一样.<br>
auto一般会忽略掉顶层const，同时底层const则会保留下来 要在一条语句中定义多个变量，切记，符号&和＊只从属于某个声明符，而非基本数据类型的一部分，因此初始值必须是同一种类型：
```
// k是int类型，l是int的引用
// auto 忽略了顶层const
auto k = ci, &l = i;
// m是int常量的引用，p是指向int常量的指针
// auto保留了底层const
auto &m = ci, *p = &ci;
// 错误 i的类型是int， ci的类型是 const int
// auto &n = i, *p2 = &ci;
```
#### decltype类型指示符
C++11新标准引入了第二种类型说明符decltype，它的作用是选择并返回操作数的数据类型。在此过程中，编译器分析表达式并得到它的类型，却不实际计算表达式的值<br>
```
decltype(size()) sum;
```
编译器并不实际调用函数size，而是使用当调用发生时size的返回值类型作为sum的类型。换句话说，编译器为sum指定的类型是什么呢？就是假如size被调用的话将会返回的那个类型。decltype处理顶层const和引用的方式与auto有些许不同。如果decltype使用的表达式是一个变量，则decltype返回该变量的类型（包括顶层const和引用在内)<br>
```
void decltype_func()
{
    decltype(size()) sum;
    const int ci = 0, &cj = ci;
    // x的类型是const int
    decltype(ci) x = 0;
    // y的类型是 const int& , y绑定到变量x
    decltype(cj) y = x;
    //错误，z是一个引用，必须初始化
    // decltype(cj) z;
}
```
因为cj是一个引用，decltype（cj）的结果就是引用类型，因此作为引用的z必须被初始化。需要指出的是，引用从来都作为其所指对象的同义词出现，只有用在decltype处是一个例外。如果decltype使用的表达式不是一个变量，则decltype返回表达式结果对应的类型.
```
int i = 42, *p = &i, &r = i;
// b1 是一个int类型的引用
decltype(r) b1 = i;
// r+0 通过decltype返回int类型
decltype(r + 0) b2;
//错误，必须初始化,c是int&类型
// decltype(*p) c;
```
统计字符串中标点符号的数量
```
string s("Hello World!!!");
decltype(s.size()) punct_cnt = 0;//punct_cnt为size()的返回类型
//统计s中标点符号的数量
for (auto c : s)
{
    if (ispunct(c))
        punct_cnt++;
}
cout << punct_cnt
     << " punctuation characters in "
    << s << endl;
```
#### string的C11用法
如果想对string对象中的每个字符做点儿什么操作，目前最好的办法是使用C++11新标准提供的一种语句：范围for（rangefor）语句。这种语句遍历给定序列中的每个元素并对序列中的每个值执行某种操作，其语法形式是：
```
for(declaration:expression)
    statement
```
其中，expression部分是一个对象，用于表示一个序列。declaration部分负责定义一个变量，该变量将被用于访问序列中的基础元素。每次迭代，declaration部分的变量会被初始化为expression部分的下一个元素值。一个string对象表示一个字符的序列，因此string对象可以作为范围for语句中的expression部分。举一个简单的例子，我们可以使用范围for语句把string对象中的字符每行一个输出出来：
```
string str("hello zack");
    //遍历输出str中的每个字符
for (auto c : str)
{
    cout << c << endl;
}
```
统计字符串中标点符号的数量
```
string s("Hello World!!!");
decltype(s.size()) punct_cnt = 0;
//统计s中标点符号的数量
for (auto c : s)
{
    if (ispunct(c))
        punct_cnt++;
}
cout << punct_cnt
     << " punctuation characters in "
    << s << endl;
```
将字符串变为大写
```
//将字符串变为大写
string s3("Hello Vivo");
for (auto &c : s3)
{
    //通过引用string中的字符，然后修改字符
    c = toupper(c);
}
cout << s << endl;
```
将第一个单词变为大写
```
//通过下标索引修改字符串
//把第一个单词变为大写
string sind("some string");
for (decltype(sind.size()) index = 0; index != sind.size() && isspace(sind[index]); ++index)
{
    sind[index] = toupper(sind[index]);
}
```
### 网络编程
#### 网络编程基本流程
网络编程的基本流程对于服务端是这样的 服务端 <br>
1）socket----创建socket对象。<br>
网络编程中socket的作用：网络通信端点：<br>
Socket 是网络通信的端点，通过它，应用程序可以发送和接收数据。每个 Socket 都绑定了一个特定的 IP 地址和端口号，标识网络上的一个具体位置。<br>
抽象层次：<br>
Socket 提供了一个抽象层，使得程序员不需要关注底层的网络协议（如 TCP、UDP）的具体实现细节。它们可以通过一致的接口进行网络通信。<br>
数据传输：<br>
Socket 负责管理数据的传输，包括数据的封装和解封装、数据的流控制和错误检测等。Socket API 提供了一些常用函数，例如发送数据的 send 和接收数据的 recv。<br>
连接管理：<br>
对于面向连接的协议（如 TCP），Socket 负责建立和管理连接。服务器端通过 listen 和 accept 函数来等待和接受客户端的连接请求，客户端通过 connect 函数来发起连接请求。<br>
多路复用：<br>
Socket 可以通过多路复用技术（如 select、poll、epoll）同时处理多个连接，适用于高并发的网络应用。<br>

2）bind----绑定本机ip+port。<br>

std::bind 是一个函数模板，用于创建一个函数对象，该函数对象可以封装一个可调用对象（如函数指针、成员函数指针或函数对象），并将部分参数绑定到特定的值。它的使用使得我们可以在不完全提供所有参数的情况下调用函数。<br>

3）listen----监听来电，若在监听到来电，则建立起连接。<br>

4）accept----再创建一个socket对象给其收发消息。原因是现实中服务端都是面对多个客户端，那么为了区分各个客户端，则每个客户端都需再分配一个socket对象进行收发消息。<br>

5）read、write----就是收发消息了。<br>

对于客户端是这样的 客户端 1）socket----创建socket对象。<br>

2）connect----根据服务端ip+port，发起连接请求。<br>

3）write、read----建立连接后，就可发收消息了。 图示如下<br>
![](https://github.com/tormorin/tormorin/blob/main/网络编程/1.jpg)
#### 网络编程预备知识
tcp::socket：这是一个类，用于表示 TCP 网络套接字。它提供了开启连接、发送数据、接收数据等功能。<br>
io_context 是用于处理异步操作的事件循环的核心组件，在执行网络操作时，所有的异步操作都将通过它来调度和执行。<br>
#### 客户端和服务器连接的流程
##### 1.终端节点的创建
所谓终端节点就是用来通信的端对端的节点，可以通过ip地址和端口构造，其的节点可以连接这个终端节点做通信. 如果我们是客户端，我们可以通过对端的ip和端口构造一个endpoint，用这个endpoint和其通信。<br>
客户端创建端点的流程：1.首先需要对端的端口号和ip地址；2.通过from_string解析ip地址；3.检查错误；4.创建ep端点，将IP地址和端口号结合
```
int  client_end_point() {
    // Step 1. 假设客户端应用已准备
    // 获取ip地址和端口号
    std::string raw_ip_address = "127.0.0.1";
    unsigned short port_num = 3333;

    // 用于存储有关发生的错误的信息
    // 同时解析原始IP地址。
    boost::system::error_code ec;//错误码
    // Step 2. 这个函数会尝试将提供的字符串解析为IP地址
    //如果解析成功，ec 的值将被设置为 asio::error_code()（即没有错误），否则 ec 将包含错误信息。
    asio::ip::address ip_address =
        asio::ip::address::from_string(raw_ip_address, ec);

    if (ec.value() != 0) {
        // Provided IP address is invalid. Breaking execution.
        std::cout
            << "Failed to parse the IP address. Error code = "
            << ec.value() << ". Message: " << ec.message();
        return ec.value();
    }

    // Step 3.创建了一个TCP端点 ep，它将这个IP地址和端口号结合起来，用于之后的网络操作，比如绑定、连接等。
    asio::ip::tcp::endpoint ep(ip_address, port_num);

    // Step 4. The endpoint is ready and can be used to specify a 
    // particular server in the network the client wants to 
    // communicate with.

    return 0;
}
```
如果是服务端，则只需根据本地地址绑定就可以生成endpoint
服务器创建端点的流程：1.获取端口号，2.创建ip地址，意味着服务器可以接收的ip地址，3.创建端点
```
int  server_end_point(){
    // Step 1. Here we assume that the server application has
    //already obtained the protocol port number.
    unsigned short port_num = 3333;

    // Step 2. Create special object of asio::ip::address class
    // that specifies all IP-addresses available on the host. Note
    // that here we assume that server works over IPv6 protocol.
 //该地址指向所有IPv6接口。这通常用于服务器端套接字编程中，允许服务器监听所有可用的IPv6地址上的入站连接。
    asio::ip::address ip_address = asio::ip::address_v6::any();

    // Step 3.一个静态方法，用于生成一个IPv6地址
   
    asio::ip::tcp::endpoint ep(ip_address, port_num);

    // Step 4. The endpoint is created and can be used to 
    // specify the IP addresses and a port number on which 
    // the server application wants to listen for incoming 
    // connections.

    return 0;
}
```
##### 2.创建socket
创建socket分为4步，创建上下文iocontext，选择协议，生成socket，打开socket。
```
int create_tcp_socket() {
    // Step 1. An instance of 'io_service' class is required by
            // socket constructor.
//asio::io_context 是用于处理异步输入输出操作的核心服务组件。它提供了一个调度平台，允许程序执行任何异步操作，如Socket通信、定时器等待和文件读写等。
//asio::io_context 对象通常是网络应用中常用到的对象之一，因为它负责管理和处理所有的异步操作。你可以将它视为一个背后的工作线程，负责协调所有的IO操作。
    asio::io_context  ios;

    // Step 2. Creating an object of 'tcp' class representing
    // a TCP protocol with IPv4 as underlying protocol.
//使用 asio::ip::tcp::v4() 函数可以创建一个代表 IPv4 TCP 协议的对象。这通常用于配置套接字或端点（endpoint），使其使用 IPv4 地址。
//asio::ip::tcp 是一个封装了 TCP 协议相关功能的命名空间，而 asio::ip::tcp::v4() 是一个静态成员函数，它返回一个 asio::ip::tcp 类型的对象，这个对象专门用于IPv4通信。
    asio::ip::tcp protocol = asio::ip::tcp::v4();

    // Step 3. Instantiating an active TCP socket object.
//表示使用 I/O 上下文 ios 初始化了一个 TCP 套接字 sock。这个套接字可以用于执行网络操作，如连接、发送和接收数据。
    asio::ip::tcp::socket sock(ios);

    // Used to store information about error that happens
    // while opening the socket.
//错误码
    boost::system::error_code ec;

    // Step 4. Opening the socket.
//sock.open(protocol, ec); 是用来打开一个套接字并指定其使用的协议的方法。protocol 是一个协议对象（如 TCP 或 UDP），ec 是一个 asio::error_code 对象，用来捕捉操作中出现的任何错误。
//参数 protocol 定义了套接字使用的协议类型，例如 asio::ip::tcp::v4() 或 asio::ip::tcp::v6()，分别表示使用 IPv4 或 IPv6 的 TCP 协议。
//如果 sock.open() 调用成功，则 ec 被置为零；如果有错误发生，则 ec 会被设置为相应的错误代码，可以用来进行错误处理。
    sock.open(protocol, ec);

    if (ec.value() != 0) {
        // Failed to open the socket.
        std::cout
            << "Failed to open the socket! Error code = "
            << ec.value() << ". Message: " << ec.message();
        return ec.value();
    }

    return 0;
}
```
上述socket只是通信的socket，如果是服务端，我们还需要生成一个acceptor的socket，用来接收新的连接。acceptor与socket创建步骤一样.
```
int  create_acceptor_socket() {
    // Step 1. An instance of 'io_service' class is required by
        // socket constructor.
//1.上下文
    asio::io_context ios;

    // Step 2. Creating an object of 'tcp' class representing
            // a TCP protocol with IPv6 as underlying protocol.
//2.ip_v6协议
    asio::ip::tcp protocol = asio::ip::tcp::v6();

    // Step 3. Instantiating an acceptor socket object.
//4.asio::ip::tcp::acceptor 对象是用于监听和接受传入的 TCP 连接请求的。通过在指定的端口上监听，acceptor 可以接受来自客户端的连接请求并创建新的套接字用于进一步的数据交换。
    asio::ip::tcp::acceptor acceptor(ios);

    // Used to store information about error that happens
    // while opening the acceptor socket.
//5.错误码
    boost::system::error_code ec;

    // Step 4. Opening the acceptor socket.
//打开acceptor,是用来打开一个acceptor对象并指定其使用的协议的方法
//打开失败ec置为0，调用成功，acceptor对象将根据指定的协议准备好接受连接
    acceptor.open(protocol, ec);

    if (ec.value() != 0) {
        // Failed to open the socket.
        std::cout
            << "Failed to open the acceptor socket!"
            << "Error code = "
            << ec.value() << ". Message: " << ec.message();
        return ec.value();
    }

    return 0;
}
```
##### 绑定acceptor
对于acceptor类型的socket，服务器要将其绑定到指定的断点,所有连接这个端点的连接都可以被接收到。
绑定acceptor的步骤:1.首先要有端口号；2.创建端点，用于接收ip地址；3.创建上下文；4.创建acceptor；5.绑定acceptor,绑定ep，通过ec来报错
```
int  bind_acceptor_socket() {

    // Step 1. Here we assume that the server application has
        // already obtained the protocol port number.
//1.端口号
    unsigned short port_num = 3333;

    // Step 2. Creating an endpoint.
//2.创建端点
    asio::ip::tcp::endpoint ep(asio::ip::address_v4::any(),
        port_num);

    // Used by 'acceptor' class constructor.
//3.上下文
    asio::io_context  ios;

    // Step 3. Creating and opening an acceptor socket.
//4.创建acceptor
    asio::ip::tcp::acceptor acceptor(ios, ep.protocol());
//5.错误码
    boost::system::error_code ec;

    // Step 4. Binding the acceptor socket.
//acceptor.bind(ep, ec); 方法用于将 asio::ip::tcp::acceptor 对象绑定到特定的网络端点 (ep)。
//这是建立服务器和开始监听前的必要步骤之一。ec 参数是一个 asio::error_code 对象，用于捕获操作中可能发生的任何错误。
    acceptor.bind(ep, ec);

    // Handling errors if any.
    if (ec.value() != 0) {
        // Failed to bind the acceptor socket. Breaking
        // execution.
        std::cout << "Failed to bind the acceptor socket."
            << "Error code = " << ec.value() << ". Message: "
            << ec.message();

        return ec.value();
    }

    return 0;
}
```
##### 连接指定的端点
作为客户端可以连接服务器指定的端点进行连接
客户端连接端点的流程:1.首先要有对端的端口号；2.创建端点，上下文，套接字对象，套接字对象要给上下文和端点的服务信息；3.在套接字对象上调用connnect方法，连接端点ep，建立连接
```
int  connect_to_end() {
    // Step 1. Assume that the client application has already
            // obtained the IP address and protocol port number of the
            // target server.
//ip地址和端口号
    std::string raw_ip_address = "127.0.0.1";
    unsigned short port_num = 3333;

    try {
        // Step 2. Creating an endpoint designating 
        // a target server application.
//创建一个端点
        asio::ip::tcp::endpoint
            ep(asio::ip::address::from_string(raw_ip_address),
                port_num);
//上下文
        asio::io_context ios;

        // Step 3. Creating and opening a socket.
//套接字
        asio::ip::tcp::socket sock(ios, ep.protocol());
//在套接字对象 sock 上调用 connect 方法，尝试连接到指定的端点 ep，以建立与目标服务器的网络连接
        // Step 4. Connecting a socket.
        sock.connect(ep);

        // At this point socket 'sock' is connected to 
        // the server application and can be used
        // to send data to or receive data from it.
    }
    // Overloads of asio::ip::address::from_string() and 
    // asio::ip::tcp::socket::connect() used here throw
    // exceptions in case of error condition.
//使用 try 块来包围可能会引发异常的代码块，然后在 catch 块中处理异常。
//在这里，catch (system::system_error& e) 捕获了类型为 system::system_error 的异常，并通过引用 e 来访问异常对象。在异常处理块内部进行了以下操作：
    catch (system::system_error& e) {
        std::cout << "Error occured! Error code = " << e.code()
            << ". Message: " << e.what();

        return e.code().value();
    }
}
```
##### 服务器接收连接
当有客户端连接时，服务器需要接收连接
流程：1.创建监听队列的长度，端口号，端点，上下文；2.创建acceptor来监听客户端请求，要给acceptor上下文信息和端点的服务信息；3.acceptor绑定ep端点。4.调用acceptord的listen函数监听客户端的请求，给到的参数为监听队列长度，即排队等待处理的连接请求的最大数量。5.创建一个套接字对象，并调用acceptor的accept函数来
```
int accept_new_connection(){
    // The size of the queue containing the pending connection
            // requests.
//监听队列长度
    const int BACKLOG_SIZE = 30;

    // Step 1. Here we assume that the server application has
    // already obtained the protocol port number.
//端口号
    unsigned short port_num = 3333;

    // Step 2. Creating a server endpoint.
//创建端点
    asio::ip::tcp::endpoint ep(asio::ip::address_v4::any(),
        port_num);
//上下文
    asio::io_context  ios;

    try {
        // Step 3. Instantiating and opening an acceptor socket.
//创建acceptor,用于监听特定端口并接受客户端的连接请求。
        asio::ip::tcp::acceptor acceptor(ios, ep.protocol());

        // Step 4. Binding the acceptor socket to the 
        // server endpint.
//于将 acceptor 对象绑定到特定的 IP 地址和端口。通过将 acceptor 绑定到特定的 IP 地址和端口，服务器可以开始监听来自该 IP 地址和端口的连接请求。
        acceptor.bind(ep);

        // Step 5. Starting to listen for incoming connection
        // requests.
//通过调用 acceptor.listen(BACKLOG_SIZE) 方法，可以设定服务器接受连接的队列大小，即表示服务器可以排队等待处理的连接请求的最大数量。
        acceptor.listen(BACKLOG_SIZE);

        // Step 6. Creating an active socket.
//通过这行代码，一个 TCP 套接字对象被实例化并赋值给变量 sock，以便后续在程序中使用该套接字对象进行网络通信操作
        asio::ip::tcp::socket sock(ios);
        // Step 7. Processing the next connection request and 
        // connecting the active socket to the client.
。//使用 acceptor.accept(sock); 方法是用来接受来自客户端的连接请求，并且将连接的客户端套接字与提供的 sock 套接字对象关联。
        acceptor.accept(sock);

        // At this point 'sock' socket is connected to 
        //the client application and can be used to send data to
        // or receive data from it.
    }
    catch (system::system_error& e) {
        std::cout << "Error occured! Error code = " << e.code()
            << ". Message: " << e.what();

        return e.code().value();
    }
}
```
### 关于buffer
任何网络库都有提供buffer的数据结构，所谓buffer就是接收和发送数据时缓存数据的结构。 boost::asio提供了asio::mutable_buffer 和 asio::const_buffer这两个结构，他们是一段连续的空间，首字节存储了后续数据的长度。 asio::mutable_buffer用于写服务，asio::const_buffer用于读服务。但是这两个结构都没有被asio的api直接使用。 对于api的buffer参数，asio提出了MutableBufferSequence和ConstBufferSequence概念，他们是由多个asio::mutable_buffer和asio::const_buffer组成的。也就是说boost::asio为了节省空间，将一部分连续的空间组合起来，作为参数交给api使用。 <br>
我们可以理解为MutableBufferSequence的数据结构为std::vector 结构如下
![](https://github.com/tormorin/tormorin/blob/main/网络编程/buffer.jpg)
每个ector存储的都是mutable_buffer的地址，每个mutable_buffer的第一个字节表示数据的长度，后面跟着数据内容。 这么复杂的结构交给用户使用并不合适，所以asio提出了buffer()函数，该函数接收多种形式的字节流，该函数返回asio::mutable_buffers_1 o或者asio::const_buffers_1结构的对象。 如果传递给buffer()的参数是一个只读类型，则函数返回asio::const_buffers_1 类型对象。 如果传递给buffer()的参数是一个可写类型，则返回asio::mutable_buffers_1 类型对象。 asio::const_buffers_1和asio::mutable_buffers_1是asio::mutable_buffer和asio::const_buffer的适配器，提供了符合MutableBufferSequence和ConstBufferSequence概念的接口，所以他们可以作为boost::asio的api函数的参数使用。 简单概括一下，我们可以用buffer()函数生成我们要用的缓存存储数据。
<br> 比如boost的发送接口send要求的参数为ConstBufferSequence类型
```
template<typename ConstBufferSequence>
std::size_t send(const ConstBufferSequence & buffers);
```
我们需要将"Hello Word转化为该类型"
```
void use_const_buffer() {
    std::string buf = "hello world!";
    asio::const_buffer  asio_buf(buf.c_str(), buf.length());
    std::vector<asio::const_buffer> buffers_sequence;
    buffers_sequence.push_back(asio_buf);
}
```
最终buffers_sequence就是可以传递给发送接口send的类型。但是这太复杂了，可以直接用buffer函数转化为send需要的参数类型
```
void use_buffer_str() {
    asio::const_buffers_1 output_buf = asio::buffer("hello world");
}
```
output_buf可以直接传递给该send接口。我们也可以将数组转化为send接受的类型
```
void use_buffer_array(){
    const size_t  BUF_SIZE_BYTES = 20;
    std::unique_ptr<char[] > buf(new char[BUF_SIZE_BYTES]);
    auto input_buf = asio::buffer(static_cast<void*>(buf.get()), BUF_SIZE_BYTES);
}
```
# 5.27
## C++基础
### vector类
#### 初始化
用花括号进行列表初始化 2 可以用()指定初始值和个数初始化
```
void vector_init()
{
    //列表初始化
    vector<string> v1{"a", "b", "c"};//花括号初始化
    //错误用法  不能用括号
    // vector<string> v2("a", "b", "c");
    //初始化vector大小为10，每个元素为-1
    vector<int> ivec(10, -1);
    // 10个string类型的元素,每个都是hi
    vector<string> svec(10, "hi!");
    // 10个元素，每个都初始化为0
    vector<int> ivec2(10);
    // 10个元素，每个都初始化为空string
    vector<string> svec2(10);
}
```
#### 添加元素
```
//利用push_back将元素添加到vector末尾
vector<int> v2;
for (int i = 0; i != 100; ++i)
{
    v2.push_back(i);
}
```
#### 遍历访问
```
 // 求vector 每个元素平方值
vector<int> v3{1, 2, 3, 4, 5, 6, 7, 8, 9};
for (auto &i : v3)
{
    i *= i;
}
for (auto i : v3)
{
    cout << i << " ";
}
cout << endl;
```
#### 下标访问
```
//索引访问
// 11个分数段，全部初始化为0
vector<unsigned> scores(11, 0);
unsigned grade;
//读取成绩
while (cin >> grade)
{
    //只处理有效成绩，小于等于100的成绩
    if (grade <= 100)
    //对应的分数段+1，修改索引对应的元素值
        ++scores[grade / 10];
}
```
## 网络编程
### 同步读写
#### 同步读写的客户端建立
1.创建一个上下文ioc，用于socket的初始化<br>
2.构造一个endpoint端点，用于连接对端服务器<br>
3.创建一个socket对象，并用ioc对它进行初始化<br>
4.创建错误码，发生错误时报错，打印错误信息<br>
5.判断是否存在错误，报错打印信息<br>
6.创建一个数组用于发送信息<br>
7.通过写函数和buffer将信息写给socket并发送给服务器<br>
8.创建一个数组用于接收服务器发来的信息<br>
9.通过读函数，将服务器传来的socket的数据写入buffer存到数组里，并打印<br>
```
//在main函数里实现
 //用try catch 方法来接收异常
 try {
     //1.创建上下文服务
     boost::asio::io_context ioc;
     //2.构建endpoint 用于通信的端点，连接对端ip和端口
     tcp::endpoint remote_ep(address::from_string("127.0.0.1"), 10086);
     //3.创建一个socket对象 并绑定上下文，绑定上下文后
     tcp::socket sock(ioc);
     //4.创建一个错误码，用来表示找不到主机的错误情况
     boost::system::error_code error = boost::asio::error::host_not_found;
     //5.调用sock的connect函数，同步连接到remote_ep指定的远程端点，如果连接出现错误，就用error来反映，没有错就连接成功
     sock.connect(remote_ep, error);
     //6.检查错误原因
     if (error)
     {//error.message() 会输出错误描述，error.value() 会提供错误代码。
         cout << "connect failed, code is " << error.value() << " error msg is " << error.message();
     }
     //提醒输入消息
     std::cout << "Enter message: ";
     //7.定义一个request数组用于存储输入的消息
     char request[MAX_LENGTH];
     //8.从输入中读取数据存入request数组，最大存储长度为1024;
     std::cin.getline(request, MAX_LENGTH);
     //9.向服务发送的数据长度就为request数组长度
     size_t request_length = strlen(request);
     //10.调用write函数 并将数组的内容写入buffer  并通过write函数将buffer内容写入sock
     boost::asio::write(sock, boost::asio::buffer(request, request_length));
     //11.定义个reply数组用来接收服务器回传的消息，最大存储长度为1024
     char reply[MAX_LENGTH];
     //read函数实际返回的是读到的长度，该函数会从sock读取数据写入buffer
     size_t reply_length = boost::asio::read(sock, boost::asio::buffer(reply, request_length));
     //提示rply的信息
     std::cout << "Reply is: ";
     //将reply数组内容打印出来
     std::cout.write(reply, reply_length);
     std::cout << "\n";
 }
 //有异常信息会被catch抓获并打印异常信息
 catch (std::exception& e) {
     std::cerr << "Exception: " << e.what() << endl;
 }
```
#### 同步读写的服务器建立
1.创建一个session函数，该函数用来处理客户端的连接请求，一次连接调用一次<br>
2.在session函数里首先要创建一个data数组用来接收客户端的socket发来的消息，创建之后要进行清空操作<br>
3.创建错误码用来处理报错<br>
4.用读函数来读取客户端传来的socket并将读到的数据给到buffer，存入data数组里<br>
5.判断对端是否关闭，如果关闭，打印错误信息<br>
6.判断是否有错，如果出现错误，可能是系统级的错误<br>
7.打印服务器的地址和端口--这步操作主要是用来在控制台显示服务器的地址和端口，便于客户端来发送<br>
8.打印data里的信息，即客户端发送过来的信息<br>
9.回传数据--调用写函数，将data里的值写给socket，注意此处的socket要用指针，因为调用函数时，函数的形参本质是复制实参，并未对实参进行操作，而指针形参会将指向的地址的数据改写，达到了修改实参的作用，读函数之所以不需要用指针，则是因为读操作不需要改变socket值，如果socket传来的数据很长，此时形参复制实参效率就会很低下，推荐使用常引用来实现对实参的直接访问且不用担心实参的值被修改。<br>
10.创建server函数用来监听对客户端的连接<br>
11.在server函数中创建acceptor来监听客户端连接，给到acceptor的参数有上下文和端点信息，端点通过tcp::v4()来获取本地地址，port为端口号<br>
12.创建一个新的socket对象，该对象用智能指针的方式管理，避免了内存泄漏，二次析构的风险<br>
13.调用accept函数来接收客户端发来的socket对象，并将客户端socket复制给新创建的socket，使用指针的目的是为了能改变新创建的socket的值<br>
14.使用 std::make_shared 创建一个代表新线程的智能指针 t，并将其指向 session 函数，传递 socket 参数，即创建一个线程用来管理session<br>
15.将新创建的线程指针插入到 thread_set 容器中，用于管理各线程对象。<br>
16.主函数里要调用server须先创建一个ioc对象，给到server用于socket初始化，并将端口给到endpoint<br>
17.主函数里处理线程用到了jion函数，此函数为等待线程结束，先将线程集合进行遍历，将遍历到的线程依次调用jion，保证子线程全部执行结束；<br>
```
#include <iostream>
#include<boost/asio.hpp>
#include<set>
#include<memory>//智能指针
using namespace std;
using boost::asio::ip::tcp;
const int MAX_LENGTH = 1024;

//创建一个智能指针类型socket_ptr,此智能指针用于管理socket对象
typedef std::shared_ptr<tcp::socket>socket_ptr;//智能指针类型

// 这行代码声明了一个集合（set），其中存储的是指向 std::thread 对象的智能指针 std::shared_ptr
// 这样的数据结构通常用于管理多线程应用中的线程对象，同时通过智能指针自动处理线程对象的生命周期
std::set<std::shared_ptr<std::thread>>thread_set;

//创建session函数，该函数为服务器处理客户端请求，每当我们获取客户端连接后就调用该函数
void session(socket_ptr sock) {//参数为sock意味着客户端传过来一个socket对象
    try{
        for (;;) {
            //创建一个data数组，最大长度为1024
            char data[MAX_LENGTH];
            //把data数组里的数据清空成0
            memset(data, '\0', MAX_LENGTH);
            //创建一个错误码
            boost::system::error_code error;
            //读取sock的数据，并将此数据存入buffer内并给到data数组
            size_t length = sock->read_some(boost::asio::buffer(data, MAX_LENGTH), error);
            //如果对端关闭，发送错误信息
            if (error == boost::asio::error::eof) {//eof表示对端关闭
                std::cout << "connection closed by peer" << endl;
                break;
            }
            //发生错误，说明出现系统级的错误
            else if (error) {
                throw boost::system::system_error(error);
            }
            //打印服务器的地址和端口
            cout << "receive form " << sock->remote_endpoint().address().to_string() << endl;
            //打印收到的消息
            cout << "receive message is" << data << endl;
            //回传
            //使用*sock的目的是为了修改sock的内容，如果是sock就不会修改sock；
            //write函数将buffer内的数据传给*sock指向的地址，即修改了sock的数据
            boost::asio::write(*sock, boost::asio::buffer(data, length));
        }
    }
    catch (std::exception& e) {
        std::cerr << "Exception in thread:" << e.what() << "\n" << std::endl;
    }
}
void server(boost::asio::io_context &io_context,unsigned short port) {
    //创建一个acceptor,需要给到上下文和端点,端点中要有地址和端口号
    //通过创建tcp::acceptor对象，你可以在指定的端口上监听传入的连接，并接受这些连接。
    // 在实际应用中，通常会在这个接受连接的过程中创建新的套接字对象来处理通信。
    tcp::acceptor a(io_context,tcp::endpoint(tcp::v4(), port));
    for (;;) {
        //使用智能指针创建一个socket对象
        socket_ptr socket(new tcp::socket(io_context));
        //在这行代码中，a.accept(*socket);将会阻塞程序直到有一个新的连接被接受。
        // 一旦有连接被接受，它将会将该连接的套接字（socket）赋值给*socket，从而可以通过socket对象进行通信。
        //就是将客户端传来的socket赋值给新创建的socket
        a.accept(*socket);
        //std::thread(session, socket): 创建一个新的线程，其中session是线程函数，socket是传递给线程函数的参数。
        auto t = std::make_shared<std::thread>(session, socket);
        //thread_set 是一个容器，用于存储线程的智能指针，以便对线程进行管理和跟踪
        thread_set.insert(t);//将线程放入集合里，防止被回收
    }
}
int main()
{
    try {
        boost::asio::io_context ioc;
        server(ioc, 10086);
        for (auto& t : thread_set)
        {
            //调用 join 方法可以等待线程执行完成，确保主线程在子线程完成后再继续执行其他操作。
            t->join();//子线程全退出后，子线程才会全退出
        }
    }
    catch (std::exception& e) {

    }
    return 0;
}
```
## C++基础
### shard_ptr智能指针
智能指针和普通指针用法相似，智能指针的本质是一个模板类，对普通指针进行了封装，通过在构造函数中初始化分配内存，在析构函数中释放内存，达到自己管理内存，不需要手动管理内存的效果，避免了忘记释放内存而导致的内存泄露。
shared_ptr 是C++11提供的一种智能指针类，可以在任何地方都不使用时自动删除相关指针，从而帮助彻底消除内存泄漏和悬空指针的问题。<br>
它遵循共享所有权的概念，即不同的 shared_ptr 对象可以与相同的指针相关联，并在内部使用引用计数机制来实现这一点。<br>
每个 shared_ptr 对象在内部指向两个内存位置：<br>
1、指向对象的指针。<br>
2、用于控制引用计数数据的指针。<br>
共享所有权如何在参考计数的帮助下工作：<br>
1、当新的 shared_ptr 对象与指针关联时，则在其构造函数中，将与此指针关联的引用计数增加1。<br>
2、当任何 shared_ptr 对象超出作用域时，则在其析构函数中，它将关联指针的引用计数减1。如果引用计数变为0，则表示没有其他 shared_ptr 对象与此内存关联，在这种情况下，它使用delete函数删除该内存。<br>
shared_ptr是以类模板的方式实现的，shared_ptr（其中 T 表示指针指向的具体数据类型）的定义位于头文件。<br>
# 5.29
#### 异步读写服务器的建立
1.创建一个session类，用来管理用户连接<br>
2.添加session类的成员，包括:读回调函数，写回调函数，socket套接字，最大接收长度1024，接收数组data，有参构造函数，参数为上下文ioc并在构造函数的初始化列表里对socket进行了初始化，成员函数&socket()用来访问socket对象<br>
3.创建Start()函数，来监听客户端发送的数据，通过调用异步读函数来监听对端发来的消息--异步读函数的参数包括：1.要赋值的参数buffer 2.绑定的回调函数：读回调函数（bind绑定时不需要知道其参数类型，只要有this指针指向，和占位符（占位符的数量与其参数数量相同））（回调函数会在读操作完成之后进行回调）；<br>
4.创建读回调函数handle_read(),此函数将会在读操作完成后进行调用，调用首先会判断读操作是否成功，成功则在控制台打印收到的信息，并调用异步写函数，将data的值写入buffer,传给socket发送给客户端。完成异步写操作后，会调用回调写函数<br>
5.创建回调写函数handle_write(),此函数首先会将data数组清空，用于下一次从客户端接收数据，并调用异步读函数，继续从客户端监听连接，并将传来的socket写入data数组，完成异步写函数后会调用回调写函数；<br>
6.创建Server类用来监听客户端的连接，其成员函数包括：1.有参构造，参数为上下文和端口，用来建立结点和初始化socket，2.开始接收函数start_aceept();3.回调接收函数handle_accept(),参数有session,常引用错误码，3.上下文ioc,4.传入连接对象acceptor<br>
7.创建start_accept()开始接收连接函数，1.首先创建一个session对象，并用ioc初始化，ioc会在session的有参构造初始化列表里初始化套接字socket;2.调用异步接收函数，通过socket()函数来返回一个新的socket对象来复制客户端传来的socket,之后再调用回调接收函数<br>
8.回调接收函数handle_accept().此函数会通过satrt_accept()传来的new_session对象，调用其satrt函数，开始异步读写操作，并同时开始监听下一轮客户端发来的连接。<br>
```
//类的定义
#pragma once
#include<boost/asio.hpp>
#include<iostream>
using namespace boost::asio::ip;
class Session
{
public:
    Session(boost::asio::io_context& ioc) :_socket(ioc) {
    }
    tcp::socket& Socket() {
        return _socket;
    }
    void Start();
private:
    //读的回调函数 参数包括错误码和正在发送的长度
    void handle_read(const boost::system::error_code& error, size_t bytes_transfered);
    //写的回调函数
    void handle_write(const boost::system::error_code& error);
    //套接字
    tcp::socket _socket;
    //接收数据的最大长度1024，用了枚举常量定义，意味着不可改变其值
    enum { max_length = 1024 };
    //数据数组
    char _data[max_length];

};

class Server {
public:
    Server(boost::asio::io_context& ioc, short port);
private:
    void start_accept();
    void handle_accept(Session* new_session, const boost::system::error_code& error);
    boost::asio::io_context& _ioc;
    tcp::acceptor _acceptor;
};
```
```
//函数体的实现
#include "Session.h"
#include<boost/asio.hpp>
using namespace boost::asio::ip;
using namespace std;
void Session::Start() {
    memset(_data, 0, max_length);
    _socket.async_read_some(boost::asio::buffer(_data, max_length),
        std::bind(&Session::handle_read, this, placeholders::_1,
            placeholders::_2)
    );
}

void Session::handle_read(const boost::system::error_code& error, size_t bytes_transfered) {

    if (!error) {
        cout << "server receive data is " << _data << endl;
        boost::asio::async_write(_socket, boost::asio::buffer(_data, bytes_transfered),
            std::bind(&Session::handle_write, this, placeholders::_1));
    }
    else {
        delete this;
    }
}
void Session::handle_write(const boost::system::error_code& error) {
    if (!error) {
        memset(_data, 0, max_length);
        _socket.async_read_some(boost::asio::buffer(_data, max_length), std::bind(&Session::handle_read,
            this, placeholders::_1, placeholders::_2));
    }
    else {
        delete this;
    }
}

Server::Server(boost::asio::io_context& ioc, short port) :_ioc(ioc),
_acceptor(ioc, tcp::endpoint(tcp::v4(), port)) {
    start_accept();
}

void Server::start_accept() {
    Session* new_session = new Session(_ioc);
    _acceptor.async_accept(new_session->Socket(),
        std::bind(&Server::handle_accept, this, new_session, placeholders::_1));
}
void Server::handle_accept(Session* new_session, const boost::system::error_code& error) {
    if (!error) {
        new_session->Start();
    }
    else {
        delete new_session;
    }

    start_accept();
}
```
```
//主函数

#include <iostream>
#include"Session.h"

int main()
{
    try {
        boost::asio::io_context ioc;
        using namespace std;
        Server s(ioc, 10086);
        ioc.run();
    }
    catch (std::exception& e) {
        std::cerr << "Exception:" << e.what() << "\n";

    }
    return 0;
}

```

# 5.30
#### 同步读写和异步读写的区别
同步读写：
在同步读写中，程序会在执行IO操作时等待直到IO操作完成，期间程序无法执行其他任务。
这意味着当一个IO操作正在进行时，程序会被阻塞，直到数据被读取或写入完成。<br>
异步读写：
在异步读写中，程序发出IO请求后会继续执行后续操作，而不必等待IO操作完成。
当IO操作完成后，程序会得到通知，然后可以处理已完成的IO操作。<br>
#### 模拟伪闭包实现连接
1.通过智能指针管理session类:
(1)Session类继承自模板类std::enable_shared_from_this,std::enable_shared_from_this的作用是允许一个对象（通常是一个使用std::shared_ptr管理的对象）创建一个指向自身的std::shared_ptr，以防止出现悬空指针问题。
[注]：enable_shared_from_this:<br>
当使用std::shared_ptr管理一个对象时，可能会遇到一种情况：希望在对象的某些成员函数中能够安全地获取指向自身的std::shared_ptr，这样可以确保在对象处于活动状态时保持共享所有权，避免对象被提前释放而导致悬空指针问题。
在一个类中继承 std::enable_shared_from_this，通过调用 shared_from_this() 成员函数可以获得一个指向自身的 std::shared_ptr，而不是通过普通的 this 指针来获取智能指针。
具体来说，这个功能主要用于在对象内部获取与外部共享 std::shared_ptr 内部的智能指针，确保能够正确管理对象的生命周期，避免悬空指针问题。在这种情况下，任何持有该对象的 shared_ptr 都会增加对象中 shared_ptr 的引用计数，直到所有持有者均释放其 shared_ptr。<br>
悬空指针问题:<br>
悬空指针是指指向已经被释放的内存或对象的指针，当程序尝试通过这样的指针访问或操作内存时，可能会引发未定义的行为、程序崩溃或数据损坏等问题。悬空指针问题通常是由于释放内存后未将指针置为nullptr或重新分配内存，导致指针仍然指向之前的内存区域而产生的。
在C++中，悬空指针问题经常会出现在手动管理内存的情况下，例如使用new和delete操作符进行内存分配与释放。当程序中存在悬空指针时，对这些指针进行解引用或其他操作可能导致意外的后果。为避免悬空指针问题，可以采用以下方法：<br>
对于指针类型的变量，在释放内存后及时将指针置为nullptr，这样可以避免悬空指针的问题。<br>
尽量使用智能指针（如std::shared_ptr、std::unique_ptr）来管理内存，因为智能指针会在对象不再需要时自动释放内存，避免手动管理内存带来的悬空指针问题。<br>
避免在对象生命周期结束后仍然持有该对象的指针，确保在不再需要对象时及时释放或重置指针。<br>
通过良好的内存管理和指针处理习惯，可以有效预防悬空指针问题的发生，提高程序的稳定性和可靠性。
