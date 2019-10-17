#pragma once
#include <stdexcept>


class BaseExcp : public std::logic_error {
private:
	int val1, val2;
protected:
	int report_val1() { return val1; }
	int report_val2() { return val2; }
public:
	BaseExcp(const char* msg, int a, int b) : std::logic_error(msg), val1(a), val2(b)
	{}
	virtual void report() { std::cout << "Error - "; }
};

class HmeanExcp : public BaseExcp {
public:
	HmeanExcp(const char* msg, int a, int b) : BaseExcp(msg, a ,b)
	{}
	void report()
	{
		std::cout << "Hmean failed:" << std::endl;
		std::cout << logic_error::what() << "\na = " << report_val1() << "\nb = " << report_val2() << std::endl;
	}
};

class GmeanExcp : public BaseExcp
{
public:
	GmeanExcp(const char* msg, int a, int b) : BaseExcp(msg, a, b)
	{}
	void report()
	{
		std::cout << "Gmean failed:" << std::endl;
		std::cout << logic_error::what() << "\na = " << report_val1() << "\nb = " << report_val2() << std::endl;
	}
};

