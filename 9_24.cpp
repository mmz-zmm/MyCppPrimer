#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec;
    cout << vec.at(0) << endl;
    cout << vec[0] << endl;
    cout << vec.front() << endl;
    cout << *vec.begin() << endl;
    return 0;
}