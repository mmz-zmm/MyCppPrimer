#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct LongDouble{
    LongDouble(double = 0.0);
    operator double();
    operator float();
};

void
test_14_50()
{
    LongDouble ldObj;
    int ex1 = ldObj;
    float ex2 = ldObj;
}

int main()
{
    test_14_50();
    return 0;
}