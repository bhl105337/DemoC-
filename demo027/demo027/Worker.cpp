#include "pch.h"
#include "Worker.h"
#include <iostream>
#include <string>

using namespace std;

Worker::Worker(string code)
{
	m_sCode = code;
	cout << "Worker::Worker()" << endl;
}


Worker::~Worker()
{
	cout << "Worker::~Worker()" << endl;
}


void Worker::carry()
{
	cout << "Worker::carry()" << endl;
	cout << m_sCode << endl;
}
