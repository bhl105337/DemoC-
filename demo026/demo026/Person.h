#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(string name = "Jim");
	~Person();
	void play();

protected:
	string m_sName;
};
