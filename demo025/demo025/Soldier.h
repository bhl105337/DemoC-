#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Soldier : public Person {
public:
    Soldier(string name = "Ruby", int age = 16);

    ~Soldier();

    void work();

protected:
    int m_iAge;
};
