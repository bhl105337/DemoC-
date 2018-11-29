#include <iostream>
#include <string>

using namespace std;

class Array
{
public:
	/*注意，在构造函数中，如果希望有参数传递的则添加参数赋值，作为初始化传值*/
	Array(int len);
	~Array();

	void setLen(int len);
	int getLen();

	// void printInfo();
	// Array& printInfo();
	Array* printInfo();

private:
	// int m_iLen;
	int len;
	/*注意：表示数字的以int作为数据类型，表示字符串则以string作为数据类型*/
};
