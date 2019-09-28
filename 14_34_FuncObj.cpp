#include <iostream>
using namespace std;

struct FuncObj
{
    int operator()(int a, int b, int c)
    {
        if(a)
            return b;
        else
        {
            return c;
        }
        }
};

int main()
{
    FuncObj a;
    cout << a(1, 2, 3) << endl;
    cout << a(0, 2, 3) << endl;
    return 0;
}
