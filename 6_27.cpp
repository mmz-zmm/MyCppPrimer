#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> array)
{
    int result{0};
    for (auto beg = array.begin(); beg != array.end(); ++ beg)
    {
        result += *beg;
    }
    return result;
}

int main()
{
    initializer_list<int> array{1, 2, 3, 4, 5, 6};
    cout<< "sum of those array is "<< sum(array) <<endl;
    return 0;
}