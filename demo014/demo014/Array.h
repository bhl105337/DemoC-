#pragma once
#include <iostream>
#include <string>

using namespace std;

class Array
{
public:
	Array(int count);// ��cpp���������Ҳ��Ҫͳһ�޸�
	Array(const Array& arr);
	~Array();

	void setCount(int count);

	int getCount();
	void printAddr();//��ӡָ��ĵ�ַ
	void printArr();//�˺�����Ϊ�˴�ӡarr1������ڴ��m_pArr[i] = i������ֵ
private:
	int m_iCount;
	int* m_pArr; //�������ݳ�ԱΪָ��
};
