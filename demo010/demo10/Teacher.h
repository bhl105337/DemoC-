#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	Teacher(string name = "Jim", int age = 19, int m = 100);

	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	int getNum();

private:
	string m_strName;
	int m_intAge;
	const int m_iNum;
};

/*拷贝构造函数*/
class Teacher2
{
public:
	Teacher2(string name = "Jim", int age = 19, int m = 100);
	Teacher2(const Teacher2& t2); //拷贝构造函数

	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();

private:
	string m_strName;
	int m_intAge;
};
