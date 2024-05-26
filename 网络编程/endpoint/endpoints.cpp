#include"endpoint.h"
#include<iostream>
#include"boost/asio.hpp"//boost 头文件
using namespace boost;//boost 命名域，如果再定义一个std可能会导致命名域的污染
int clinet_end_point() {
	std::string raw_ip_address = "127.4.8.1";//对端的地址
	unsigned short port_num = 3333;//对端的端口号
	boost::system::error_code ec;//asio的错误码
	asio::ip::address ip_address = asio::ip::address::from_string(raw_ip_address,ec);//通过字符串来转换
	if (ec.value() != 0)//通过错误码来判断是否有错，有错误ec不为0
	{
		std::cout << "Failed to parse the IP address. Error code=" << ec.value() << ".Message is"<<ec.message();//发生错误时打印
		return ec.value();
	}
	//转换用来通信的ip地址
	asio::ip::tcp::endpoint ep(ip_address, port_num);
}