#include <iostream>
#include <string>

using namespace std;

class Worker
{
public:
	Worker(string code = "Ruby");
	virtual ~Worker();//ĞéÎö¹¹º¯Êı
	void carry();
protected:
	string m_sCode;
};
