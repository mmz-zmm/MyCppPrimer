#include <iostream>
#include <string>
using namespace std;


int main()
{
    int i;
    double d;
    const string *ps = nullptr;
    char *pc = nullptr;
    void *pv = nullptr;

    pv = const_cast<string*>(ps);

    //i = static_cast<int>(*pc);
    pv = static_cast<void*>(&d);

    pc = reinterpret_cast<char *>(pv);
    return 0;
}