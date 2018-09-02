#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

void dump(const list<int> & lst)
{
    for_each(lst.begin(), lst.end(), [](int a) { cout << a << " "; });
    cout << endl;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst1, lst2, lst3;
    copy(vec.begin(), vec.end(), inserter(lst1, lst1.begin()));
    copy(vec.begin(), vec.end(), back_inserter(lst2));
    copy(vec.begin(), vec.end(), front_inserter(lst3));

    cout << "inserter: ";
    dump(lst1);
    cout << "back_inserter: ";
    dump(lst2);
    cout << "front_inserter: ";
    dump(lst3);

    return 0;
}