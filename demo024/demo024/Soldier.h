#include <iostream>
#include "Person.h"
#include <string>

class Soldier : public Person {
public:
    Soldier();

    ~Soldier();

//    void play();
    void play(int x);

    void work();

protected:
    string m_strName;
};


