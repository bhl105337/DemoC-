#include "pch.h"
#include  "Whorker.h"

#include <iostream>
#include <string>

using namespace std;


Whorker::Whorker()
{
	cout << "Whorker()" << endl;
}

Whorker::~Whorker()
{
	cout << "~Whorker()" << endl;
}

void Whorker::work()
{
	cout << "work()" << endl;
}
