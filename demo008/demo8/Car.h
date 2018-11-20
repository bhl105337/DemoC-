#include <string>
using namespace std;

class Teacher1
{
public:
	void setName(std::string _name);
	string getName();

	void setSex(string _sex);
	string getSex();

	void setAge(int _age);
	int getAge();

	void teach();
private:
	string m_strName;
	string m_strSex;
	int m_iAge;
};
