#include "pch.h"
#include "Coordinate.h"
#include <iostream>
#include <string>

using namespace std;

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();
	void printInfo() const;//��֤����Ա��������ͨ�ĳ�Ա�������������������Ϊ����
private:
	const Coordinate m_coorA; //��������֮�����лᱨ��ԭ��ο�Coordinate.h�ı���ע��
	Coordinate m_coorB;
};
