#include "pch.h"
#include "MigrantWorker.h"


MigrantWorker::MigrantWorker(string name, string code, string color): Farmer(name, color), Worker(code, color)
{
}


MigrantWorker::~MigrantWorker()
{
}
