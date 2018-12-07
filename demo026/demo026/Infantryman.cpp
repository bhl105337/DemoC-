#include "pch.h"
#include "Infantryman.h"
#include <iostream>
#include <string>

using namespace std;

Infantryman::Infantryman(string name, int age)
{
	m_sName = name;
	m_iAge = age;
	cout << "Infantryman::Infantryman()" << endl;
}


Infantryman::~Infantryman()
{
	cout << "Infantryman::~Infantryman()" << endl;
}

void Infantryman::attack()
{
	cout << "Infantryman::attack()" << endl;
	cout << m_sName << endl;
	cout << m_iAge << endl;
}
