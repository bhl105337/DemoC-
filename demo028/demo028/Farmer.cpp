#include "pch.h"
#include "Farmer.h"
#include <string>
#include <iostream>

using namespace std;


Farmer::Farmer(string name, string color): Person("Farmer" + color)
{
	m_sName = name;
	cout << "Farmer::Farmer()" << endl;
}


Farmer::~Farmer()
{
	cout << "Farmer::~Farmer()" << endl;
}

void Farmer::sow()
{
	cout << "Farmer::sow()" << endl;
	cout << m_sName << endl;
}
