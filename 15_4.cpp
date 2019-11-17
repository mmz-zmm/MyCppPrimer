#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Base{

};

class Derived: public Derived{};

class Derived2: private Base{};

class Derived3 : public Base;

void test_xx()
{

}


int main()
{
    test_xx();
    return 0;
}