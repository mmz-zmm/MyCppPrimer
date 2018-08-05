#include <iostream>
#include <list>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main()
{
    list<const char*> L1{"Happy","every","day"};
    vector<string> vec1;
    vec1.assign(L1.cbegin(), L1.cend());

    for(const auto &item : vec1)
        cout << item << " ";
    cout << endl;
    return 0;
}