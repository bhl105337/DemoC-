#include <iostream>
#include <string>

using namespace std;

class Farmer
{
public:
	Farmer(string name = "Joker");
	virtual ~Farmer();//ĞéÎö¹¹º¯Êı
	void sow();
protected:
	string m_sName;
};
