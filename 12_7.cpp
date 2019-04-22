#include <iostream>
#include <memory>
#include <vector>
using namespace std;

typedef shared_ptr<vector<int>> spt;

spt factory()
{
    return make_shared<vector<int>>();
}

void read( spt pv)
{
    int value;
    while(cin >>value)
    {
        pv->push_back(value);
    }
}

void print(const spt pv)
{
    for(const auto value : *pv)
        cout << value << " ";
    cout << endl;
}

int main()
{
    auto pv = factory();
    read(pv);
    print(pv);
    return 0;
}