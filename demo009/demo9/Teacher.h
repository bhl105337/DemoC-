#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	Teacher();
	Teacher(string name, int age = 20); 
	//可以允许默认值，但是当所有的参数都有默认值时，编译无法分辨调用那个构造函数，导致无法编译，但是不代表整个语法有错，因此，在调用那边不调用无参的函数即可
	/*声明构造函数*/

	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();

private:
	string m_strName;
	int m_intAge;
};
