#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	Teacher();
	Teacher(string name, int age = 20); 
	//��������Ĭ��ֵ�����ǵ����еĲ�������Ĭ��ֵʱ�������޷��ֱ�����Ǹ����캯���������޷����룬���ǲ����������﷨�д���ˣ��ڵ����Ǳ߲������޲εĺ�������
	/*�������캯��*/

	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();

private:
	string m_strName;
	int m_intAge;
};
