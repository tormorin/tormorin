#include"endpoint.h"
#include<iostream>
#include"boost/asio.hpp"//boost ͷ�ļ�
using namespace boost;//boost ����������ٶ���һ��std���ܻᵼ�����������Ⱦ
int clinet_end_point() {
	std::string raw_ip_address = "127.4.8.1";//�Զ˵ĵ�ַ
	unsigned short port_num = 3333;//�Զ˵Ķ˿ں�
	boost::system::error_code ec;//asio�Ĵ�����
	asio::ip::address ip_address = asio::ip::address::from_string(raw_ip_address,ec);//ͨ���ַ�����ת��
	if (ec.value() != 0)//ͨ�����������ж��Ƿ��д��д���ec��Ϊ0
	{
		std::cout << "Failed to parse the IP address. Error code=" << ec.value() << ".Message is"<<ec.message();//��������ʱ��ӡ
		return ec.value();
	}
	//ת������ͨ�ŵ�ip��ַ
	asio::ip::tcp::endpoint ep(ip_address, port_num);
}