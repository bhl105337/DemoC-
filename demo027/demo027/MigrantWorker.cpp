#include "pch.h"
#include "MigrantWorker.h"
#include <iostream>
#include <string>

using namespace std;

MigrantWorker::MigrantWorker(string name, string code):Farmer(name),Worker(code)
{
	cout << "MigrantWorker::MigrantWorker()" << endl;
}


MigrantWorker::~MigrantWorker()
{
	cout << "MigrantWorker::~MigrantWorker()" << endl;
}
