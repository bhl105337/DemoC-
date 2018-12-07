#include "pch.h"
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;


Person::Person(string color)
{
	m_sColor = color;
	cout << "Person::Person()" << endl;
}


Person::~Person()
{
	cout << "Person::~Person()" << endl;
}

void Person::printColor()
{
	cout << "Person::printColor()" << endl;
	cout << m_sColor << endl;
}
