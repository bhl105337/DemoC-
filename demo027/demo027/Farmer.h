#include <iostream>
#include <string>

using namespace std;

class Farmer
{
public:
	Farmer(string name = "Joker");
	virtual ~Farmer();//����������
	void sow();
protected:
	string m_sName;
};
