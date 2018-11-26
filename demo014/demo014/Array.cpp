#include "pch.h"
#include "Array.h"
#include <iostream>
#include <string>
using namespace std;

Array::Array(int count)
{
	m_iCount = count;
	m_pArr = new int[m_iCount]; //Ӧ�û���Ҫ�Ƿ�����ɹ����ж�
	// �����ڴ棬�ڴ�ĳ���Ϊm_iCount��
	// ��Ϊһ��ʼm_iCount��ֵ�������������Ҫ����Ĭ��ֵ
	// ��Ĭ��ֵ�󣬾Ϳ���ͨ�����ֵ������һ����С���ڴ棬������m_pArrָ������ڴ�

	// Ϊ�˿��ø�����Щ����arr1���ﹹ�캯������ɹ���ǰ���£���arr1�����ÿһ���ڴ渳ֵ��ֻ��Ϊ�˿��ø�������
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = i;
	}
	cout << "Array" << endl;
}

Array::Array(const Array& arr)
{
	// m_pArr = arr.m_pArr; //��ǳ�����ķ�ʽ�����������飬�ᵼ�µ�ǰ�Ķ���ʹ���Ķ���ʹ�õ���ͬһ���ڴ棬
	// ��arr2ʵ����ʱ���ã�����ʱ����arr��ֵ��arr1
	// �ڿ������캯���У���Ҫ�������arr�����m_iCount��ֵ����ǰ�����m_iCount;
	m_iCount = arr.m_iCount; // arr1��ֵ����arr2��m_iCount

	/*���*/
	m_pArr = new int[m_iCount]; //���ʱ���ٽ�m_iCount���ڴ泤�ȷ����m_pArr��m_pArr���ڴ泤�Ⱦͻ��m_iCountһ����
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i]; //���ɵ��ڴ�Ԫ��ȫ���������µ��ڴ�����
	}

	cout << "Array(const Array& arr)" << endl;
}

Array::~Array()
{
	/*���*/
	delete []m_pArr; //��Ϊ�ͷŵ������飬�����Ҫ������[]
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
	// ����ͬһ���ڴ��־���ڴ�ӡ������m_pArr��ֵʱ����ֵ����ȵ�
	cout << "arr " << m_pArr << endl;
}

void Array::printArr()
{
	for (int i = 0; i < m_iCount; i++)
	{
		cout << m_pArr[i] << endl;
	}
}
