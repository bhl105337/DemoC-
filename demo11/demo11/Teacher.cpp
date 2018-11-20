#include "pch.h"
#include "Teacher.h"

Teacher::Teacher(string name, int age): m_strName(name), m_intAge(age)
{
	cout << "1111" << endl;
}

Teacher::Teacher(const Teacher& tea)
{
	cout << "2222" << endl;
}

Teacher::~Teacher()
{
	cout << "33333" << endl;
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

