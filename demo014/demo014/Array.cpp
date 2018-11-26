#include "pch.h"
#include "Array.h"
#include <iostream>
#include <string>
using namespace std;

Array::Array(int count)
{
	m_iCount = count;
	m_pArr = new int[m_iCount]; //应该还需要是否申请成功做判断
	// 申请内存，内存的长度为m_iCount；
	// 因为一开始m_iCount的值，不明，因此需要传入默认值
	// 有默认值后，就可以通过这个值来申请一定大小的内存，并且让m_pArr指向这段内存

	// 为了看得更清晰些，在arr1这里构造函数申请成功的前提下，给arr1申请的每一个内存赋值（只是为了看得更清晰）
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = i;
	}
	cout << "Array" << endl;
}

Array::Array(const Array& arr)
{
	// m_pArr = arr.m_pArr; //以浅拷贝的方式拷贝对象数组，会导致当前的对象和传入的对象使用的是同一段内存，
	// 在arr2实例化时调用，调用时参数arr的值是arr1
	// 在拷贝构造函数中，需要将传入的arr对象的m_iCount赋值给当前对象的m_iCount;
	m_iCount = arr.m_iCount; // arr1的值赋给arr2的m_iCount

	/*深拷贝*/
	m_pArr = new int[m_iCount]; //深拷贝时，再将m_iCount的内存长度分配给m_pArr，m_pArr的内存长度就会和m_iCount一样多
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i]; //将旧的内存元素全部拷贝到新的内存里面
	}

	cout << "Array(const Array& arr)" << endl;
}

Array::~Array()
{
	/*深拷贝*/
	delete []m_pArr; //因为释放的是数组，因此需要中括号[]
	m_pArr = NULL;
	cout << "~Array()" << endl;
}

void Array::setCount(int count)
{
	m_iCount = count;
}

int Array::getCount()
{
	return m_iCount;
}

void Array::printAddr()
{
	// 调用同一块内存标志，在打印出两个m_pArr的值时，两值是相等的
	cout << "arr " << m_pArr << endl;
}

void Array::printArr()
{
	for (int i = 0; i < m_iCount; i++)
	{
		cout << m_pArr[i] << endl;
	}
}
