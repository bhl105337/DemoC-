#include "pch.h"
#include "Farmer.h"
#include <iostream>
#include <string>

using namespace std;


Farmer::Farmer(string name)
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
