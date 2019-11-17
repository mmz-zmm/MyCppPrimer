#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Intergral{
    Intergral(int a):val(a){}
    operator const int() { return val; }
    int val;
};

void test_14_47()
{
    Intergral a(3);
    int b = a;
    cout << b;
}

int main()
{
    test_14_47();
    return 0;
}