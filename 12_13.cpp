#include <iostream>
#include <memory>
using namespace std;


int main()
{
    auto sp = make_shared<int>();
    cout << *sp << endl;
    auto p = sp.get();
    cout << *p << endl;
    delete p; // double free not catched in win10 gcc 6.3.0
    cout << *sp << endl;
    return 0;
}