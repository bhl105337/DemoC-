class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
	// void setX(Coordinate* this,int x);//����ע��һ���൱����������
	/* ��Ϊ����ʱCoordinate*this�Ǽ��ж�Ҳ��ȡȨ�޵�ָ�룬ת��Line.cpp�ı���ע�Ͷ� */

	/*����ע�����������³�Ա�����ĳɳ���Ա�������ɣ�������Ϊ��Ϊ����Ա�����������޸�x��y��ֵ��ֻ���Ǹ�getX��getY���� */
	void setX(int x);
	void setY(int y);

	int getX() const;
	int getY() const;
private:
	int m_iX;
	int m_iY;
};
