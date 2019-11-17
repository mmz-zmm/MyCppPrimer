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

struct LongDouble{
    LongDouble operator+(const SmallInt &) { return LongDouble(); }
};
LongDouble operator+(LongDouble &,double)
{
    return LongDouble();
}

void
test_14_52()
{
    SmallInt si;
    LongDouble ld;
    ld = si + ld;
    ld = ld + si;
}

int main()
{
    test_14_52();
    return 0;
}