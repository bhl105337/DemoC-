#include "pch.h"
#include "Line.h"
#include <iostream>
#include <string>

using namespace std;


Line::Line(int x1, int y1, int x2, int y2) : m_coorA(x1, y1), m_coorB(x2, y2)
{
	cout << "Line" << endl;
}

Line::~Line()
{
	cout << "~Line" << endl;
}

void Line::setA(int x, int y)
{
	// ԭ�򣺾���const����m_coorA֮���������������m_coorA�����ȥ����setX(x)ʱ���ֵ�����
	/* ���������setX(x)��setX����������ĳ�Ա��������thisָ����ѧ�����ڵ���setX(x)ʱ���������洫��һ��thisָ��
	 * ���thisָ����m_coorA����setX����Ĳ�����ʵ������setX(m_coorA,x)
	 * �鿴Coordinate.h�ı���ע��һ
	 */

	/* ����ע�Ͷ�
	 * ��ʱ����const����֮��m_coorA���ж�Ȩ�ޣ���˾ͻᱨ��
	 * ͬ�����������m_coorA.setY(y)��m_coorA.getX��m_coorA.getY()Ҳ��һ���ı���ԪӤ
	 */
	// ������� Coordinate.h����ע����
	// m_coorA.setX(x); //������ϵ
	// m_coorA.setY(y);
};

void Line::setB(int x, int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
};

void Line::printInfo()
{
	cout << "1111" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	//��ʱm_coorA�����getX��getY�Ѿ��ǳ���Ա��������˳�����m_coorA���ԺϷ��ĵ��ó���Ա����
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
};

void Line::printInfo() const
{
	/* ��ʱ�������û��������Ա��������ͨ��Ա����������������ǿ��Ի�Ϊ���ص� 
	 * ͨ�����У�ӡ֤�����Ͻ���
	 * ����������Ϊ���صĳ�Ա�����������޷�֪�����õ���һ��
	 * ������֣�
	 */
	cout << "2222" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	//��ʱm_coorA�����getX��getY�Ѿ��ǳ���Ա��������˳�����m_coorA���ԺϷ��ĵ��ó���Ա����
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
};
