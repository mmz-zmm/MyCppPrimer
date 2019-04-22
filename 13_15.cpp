#include <iostream>
using namespace std;

class numbered
{
public:
    numbered(){
        static int base = 10;
        mysn = base++;
    }
    numbered(const numbered & n)
    {
        numbered n2;
        mysn = n2.mysn;
        // mysn = n.mysn+1;
    }

    int mysn;
};

void f(numbered s)
{
    cout << s.mysn << endl;
}

int main()
{
    numbered a, b = a, c = b, d;
    f(a); f(b);
    f(c);
    f(d);
    return 0;
}