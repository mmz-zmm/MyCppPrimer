#include <iostream>
using namespace std;

class NoDefault {
    public:
      NoDefault(int val) : val_(val){}
};
class C{
    public:
    C(): C(0){}
    C(int val): c_val(val){}
    private:
      NoDefault c_val;
};

int main()
{
    C c1;

    C c2(666);

    return 0;
}