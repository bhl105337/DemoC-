#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

class Whorker : public Person
{
public:
	Whorker();
	~Whorker();

	void work();
	int m_iSalary;
};
