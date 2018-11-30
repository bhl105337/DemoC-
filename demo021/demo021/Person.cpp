#include "pch.h";
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person()
{
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::eat()
{
	cout << "eat()" << endl;
}
