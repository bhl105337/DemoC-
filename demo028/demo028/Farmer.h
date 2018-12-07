#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

class Farmer : virtual public Person
{
public:
	Farmer(string name = "Jim", string color = "blue");
	virtual ~Farmer();
	void sow();
protected:
	string m_sName;
};
