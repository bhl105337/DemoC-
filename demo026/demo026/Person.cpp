#include "pch.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person(string name)
{
	m_sName = name;
	cout << "Person::Person()" << endl;
}


Person::~Person()
{
	cout << "Person::~Person()" << endl;
}

void Person::play()
{
	cout << "Person::play()" << endl;
	cout << m_sName << endl;
}
