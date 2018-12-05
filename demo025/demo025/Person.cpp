#include "pch.h"
#include "Person.h"
#include <iostream>
#include <string>

Person::Person(string name)
{
	m_strName = name;
	cout << "Person::Person()" << endl;
}

Person::~Person()
{
	cout << "Person::~Person()" << endl;
}

void Person::play()
{
	cout << "Person::play()" << endl;
	cout << m_strName << endl;
}
