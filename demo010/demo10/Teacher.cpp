#include "pch.h"
#include "Teacher.h"

Teacher::Teacher(string name, int age, int m): m_strName(name), m_intAge(age), m_iNum(m) //初始化列表，这样可从外部定义初始化的值
{
	// m_iNum = m;// 如果去掉上面的m_iNum初始化列表,初始化值写在这里会报错，必须要在初始化列表中
	cout << "Teacher::Teacher(string name, int age): m_strName(name), m_intAge(age)" << endl;
}


void Teacher::setName(string name)
{
	m_strName = name;
}

string Teacher::getName()
{
	return m_strName;
}

void Teacher::setAge(int age)
{
	m_intAge = age;
}

int Teacher::getAge()
{
	return m_intAge;
}

int Teacher::getNum()
{
	return m_iNum;
}


/**********拷贝构造函数************/
Teacher2::Teacher2(string name, int age, int m) : m_strName(name), m_intAge(age)
{
	cout << "1111" << endl;
}

Teacher2::Teacher2(const Teacher2& t2)
{
	cout << "2222" << endl;
}


void Teacher2::setName(string name)
{
	m_strName = name;
}

string Teacher2::getName()
{
	return m_strName;
}

void Teacher2::setAge(int age)
{
	m_intAge = age;
}

int Teacher2::getAge()
{
	return m_intAge;
}
