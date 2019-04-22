#include <iostream>
using namespace std;

class numbered
{
public:
    numbered(){
        static int base = 10;
        mysn = base++;
    }

    int mysn;
};

void f(numbered s)
{
    cout << s.mysn << endl;
}

int main()
{
    numbered a, b = a, c = b,d;
    f(a); f(b);
    f(c);
    f(d);
    return 0;
}