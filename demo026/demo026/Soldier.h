#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Soldier : public Person
{
public:
	Soldier(string name = "Ruby", int age = 20);
	~Soldier();
	void work();
protected:
	int m_iAge;
};
