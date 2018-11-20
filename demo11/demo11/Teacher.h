#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	Teacher(string name = "Jim", int age = 11); //构造函数
	Teacher(const Teacher& tea); //拷贝构造函数
	~Teacher();

	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	int getNum();

private:
	string m_strName;
	int m_intAge;
};
