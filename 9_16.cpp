#include <iostream>
#include <vector>
#include <list>
using std::boolalpha;
using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    list<int> list1{1, 2, 3, 4, 5};
    vector<int> vec1{1, 2, 3, 4, 5};
    vector<int> vec2{1, 2, 3, 4, 5, 6};

    cout << boolalpha << (vector<int>(list1.cbegin(), list1.cend()) == vec1) << endl;
    cout << boolalpha << (vector<int>(list1.cbegin(), list1.cend()) == vec2) << endl;

    return 0;
}