#include<string>
#include<iostream>
using namespace std;

/*四种初始化方式*/
//默认初始化,s1是一个空字符串
string s1;
//赋值初始化,s2是s1的副本
string s2 = s1;
//直接初始化 字面值初始化
string s3 = "hiya";
//直接初始化 构造函数初始化
string s4(10, 'c');
string s5("hello zack");


/*string 操作*/
void opstr_func()
{
    //定义空字符串
    string s;
    //从输入流写入s
    cin >> s;
    //将s写入输出流
    cout << s << endl;
    //循环读取，直到遇到换行符或者非法输入
    string world;
    while (cin >> world)
        cout << world << endl;
    //读取一整行
    string linestr;
    while (getline(cin, linestr))
    {
        cout << linestr << endl;
    }

    //每次读入一整行，遇到空行跳过
    while (getline(cin, linestr))
    {
        if (!linestr.empty())
        {
            cout << linestr << endl;
            //打印字符串长度
            cout << linestr.size() << endl;
            // size()返回string::size_type类型的数据
            string::size_type size = linestr.size();
        }
    }

    // 比较
    string str1 = "Hello";
    string str2 = "Hello W";
    string str3 = "Za";
    //依次比较每个字符，字符大的字符串就大
    auto b2 = str3 > str1;
    cout << b2 << endl;
    //前面字符相同，长度长的字符串大
    auto b = str2 > str1;
    cout << b << endl;
}



int main()
{
    opstr_func();
}