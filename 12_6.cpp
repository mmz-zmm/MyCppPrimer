#include <iostream>
#include <vector>
using namespace std;

vector<int>* factory()
{
    return new vector<int>;
}

void read(vector<int> *pv)
{
    int value;
    while(cin >>value)
    {
        pv->push_back(value);
    }
}

void print(vector<int>*pv)
{
    for(const auto value : *pv)
        cout << value << " ";
    cout << endl;
}

int main()
{
    vector<int> *pv = factory();
    read(pv);
    print(pv);
    delete pv;
    return 0;
}