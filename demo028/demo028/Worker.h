#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

class Worker : virtual public Person
{
public:
	Worker(string code = "001", string color = "red");
	virtual ~Worker();
	void carry();
protected:
	string m_sCode;
};
