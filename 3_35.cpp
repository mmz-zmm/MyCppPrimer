#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int a[10];
    auto pBegin = begin(a);
    auto pEnd = end(a);
    while(pBegin != pEnd){
        *pBegin = 0;
        ++pBegin;
    }

    for(auto i :a)
        cout << i << " ";
    cout << endl;
    return 0;
}