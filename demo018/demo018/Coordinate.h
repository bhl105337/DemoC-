class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
	// void setX(Coordinate* this,int x);//报错注释一：相当于是这个情况
	/* 因为定义时Coordinate*this是既有读也有取权限的指针，转向Line.cpp的报错注释二 */

	/*报错注释三：将以下成员函数改成常成员函数即可，但是因为作为常成员函数，不能修改x和y的值，只能是给getX和getY修饰 */
	void setX(int x);
	void setY(int y);

	int getX() const;
	int getY() const;
private:
	int m_iX;
	int m_iY;
};
