#include "pch.h"
#include "Teacher.h"


Teacher::Teacher() //无参构造函数
{
	/*初始化赋值，即在不通过setName改变时的初始值*/
	m_strName = "Jim";
	m_intAge = 35;
	cout << "Teacher()" << endl;
}

Teacher::Teacher(string name, int age) //有参构造函数
{
	m_strName = name;
	m_intAge = age;
	cout << "Teacher(string name, int age)" << endl;
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
