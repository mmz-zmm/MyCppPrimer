#include <iostream>
using namespace std;

int foo(int base){
    auto f = [base](int a) { return base + a; };
    cout << f(3) << endl;

}

int main()
{
    foo(1);
    foo(3);
    return 0;
}