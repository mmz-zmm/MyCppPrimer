#include <iostream>
#include <vector>
using namespace std;
using Iterator = vector<int>::const_iterator;

void print(Iterator beg, Iterator end)
{
    if(beg == end)
        return;
    else
    {
        cout << *beg << " ";
        print(beg + 1, end);
    }

}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    print(vec.begin(), vec.end());
    return 0;
}