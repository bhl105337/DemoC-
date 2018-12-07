#include "pch.h"
#include "Soldier.h"
#include <iostream>
#include <string>

using namespace std;

Soldier::Soldier(string name, int age)
{
	m_sName = name;
	m_iAge = age;
	cout << "Soldier::Soldier()" << endl;
}


Soldier::~Soldier()
{
	cout << "Soldier::~Soldier()" << endl;
}

void Soldier::work()
{
	cout << "Soldier::work()" << endl;
	cout << m_sName << endl;
	cout << m_iAge << endl;
}
