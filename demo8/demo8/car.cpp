#include "pch.h"
#include "Car.h"

#include <iostream>
#include <string>
using namespace std;

void Teacher1::setName(string _name)
{
	m_strName = _name;
}

string Teacher1::getName()
{
	return m_strName;
}

void Teacher1::setSex(string _sex)
{
	m_strSex = _sex;
}

string Teacher1::getSex()
{
	return m_strSex;
}

void Teacher1::setAge(int _age)
{
	m_iAge = _age;
}

int Teacher1::getAge()
{
	return m_iAge;
}

void Teacher1::teach()
{
	cout << "ио©н" << endl;
}
