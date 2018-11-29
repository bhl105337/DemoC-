#include "pch.h"
#include "Array.h"
#include <iostream>
#include <string>

using namespace std;

Array::Array(int len)
{
	// m_iLen = len;
	this->len = len;
	cout << "Array()" << endl;
}

Array::~Array()
{
	cout << "~Array()" << endl;
}

void Array::setLen(int len)
{
	// m_iLen = len;
	this->len = len;
}

int Array::getLen()
{
	// return m_iLen;
	return len;
}

// void Array::printInfo()
// {
//
// }
// Array& Array::printInfo()
// {
// 	cout << "len=" << len << endl;
// 	return *this;
// 	// this是指针，*this是对象，这里是把对象返回去
// }

Array* Array::printInfo()
{
	// cout << "len=" << len << endl;
	cout << this << endl;
	return this;
	// this是指针，*this是对象，这里是把对象返回去
}
