#include <iostream>
#include <string>
using namespace std;


int main()
{
    const string *ps = nullptr;
    char *pc = nullptr;
    void *pv = nullptr;
    pv = const_cast<string*>(ps);
    pc = reinterpret_cast<char *>(pv);
    return 0;
}