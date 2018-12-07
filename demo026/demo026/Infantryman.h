#include <iostream>
#include <string>
#include "Soldier.h"

using namespace std;

class Infantryman : public Soldier
{
public:
	Infantryman(string name = "Yang", int age = 18);
	~Infantryman();
	void attack();
};
