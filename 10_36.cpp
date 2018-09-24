#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<int> lst={0,1,2,3,4,5,6,7,8,0,9,0};
    
    auto pos = find(lst.crbegin(), lst.crend(), 0);

    if(pos != lst.crbegin())
        cout << "The next element is: " << *pos.base() << endl;
    else
        cout << "It's the last element." << endl;

    return 0;
}