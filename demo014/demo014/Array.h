#pragma once
#include <iostream>
#include <string>

using namespace std;

class Array
{
public:
	Array(int count);// 在cpp改造后，这里也需要统一修改
	Array(const Array& arr);
	~Array();

	void setCount(int count);

	int getCount();
	void printAddr();//打印指针的地址
	void printArr();//此函数是为了打印arr1申请的内存的m_pArr[i] = i的所有值
private:
	int m_iCount;
	int* m_pArr; //新增数据成员为指针
};
