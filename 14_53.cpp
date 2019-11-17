#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SmallInt{
    friend SmallInt operator+(const SmallInt &, const SmallInt &);
    public:
        SmallInt(int = 0);
        operator int() const { return val; }

    private:
        size_t val;
};

void
test_14_53()
{
    SmallInt s1;
    double d = s1 + SmallInt(3.14);
}

int main()
{
    test_14_53();
    return 0;
}