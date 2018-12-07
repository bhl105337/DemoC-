// 使用宏定义：在公共类中使用，即使不是公共类也建议使用，防止公共类调用报错
#ifndef PERSON_H__
#define PERSON_H__
#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
	Person(string color = "black");
	virtual ~Person();
	void printColor();
protected:
	string m_sColor;
};

#endif
