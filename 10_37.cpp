#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec={0,1,2,3,4,5,6,7,8,9};
    list<int> lst;

    reverse_copy(vec.cbegin() + 3, vec.cbegin() + 7, back_inserter(lst));

    for(auto item : lst)
        cout << item<<" ";
    cout << endl;

    return 0;
}