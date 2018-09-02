#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;


int main()
{
    vector<int> vec{1, 1, 2, 2, 3, 3, 4, 4};
    list<int> lst;
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    for_each(lst.begin(), lst.end(), [](int a) { cout << a << " "; });
    cout << endl;
    return 0;
}