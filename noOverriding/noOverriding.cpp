#include <iostream>
using namespace std;

class baseClass {
public :
    virtual void perkenalan() {
        cout << "Halo saya Function dari base Class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Halo saya Function dari derived Class";
    }
};
int main()
{
    derivedClass a;
    a.perkenalan();
}


