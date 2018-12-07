#include "pch.h"
#include "Worker.h"
#include <string>
#include <iostream>

using namespace std;

Worker::Worker(string code, string color): Person("Worker" + color)
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
