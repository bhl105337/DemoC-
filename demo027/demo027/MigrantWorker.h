#include <iostream>
#include <string>
#include "Farmer.h"
#include "Worker.h"

using namespace std;

class MigrantWorker : public Farmer, public Worker
{
public:
	MigrantWorker(string name, string code);
	~MigrantWorker();
};
