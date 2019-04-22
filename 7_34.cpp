#include <iostream>
using namespace std;

typedef string Type;
Type initial();
class Exercise{
    public:
      typedef double Type;
      Type setVal(Type);
      Type initVal();
    private:
      int val;
};

Type Exercise::setVal(Type parm)
{
    val = parm + initVal();
    return val;
}

int main()
{
    return 0;
}