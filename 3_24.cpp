#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1;
    int value;
    while(cin>>value)
        vec1.push_back(value);

    auto begin = vec1.begin(), end = vec1.end();
    for (auto begin = vec1.begin(); begin != vec1.end() - 1; ++begin)
        cout << *begin + *(begin+1) << " ";
    cout << endl;

    for (auto begin = vec1.begin(), end = vec1.end() - 1; begin <= end; ++begin, --end)
    {
        cout << *begin + *end<<" ";
    }
    cout <<endl;
    return 0;
}