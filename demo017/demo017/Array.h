#include <iostream>
#include <string>

using namespace std;

class Array
{
public:
	/*ע�⣬�ڹ��캯���У����ϣ���в������ݵ�����Ӳ�����ֵ����Ϊ��ʼ����ֵ*/
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
	/*ע�⣺��ʾ���ֵ���int��Ϊ�������ͣ���ʾ�ַ�������string��Ϊ��������*/
};
