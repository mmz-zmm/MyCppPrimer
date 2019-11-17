#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using namespace std::placeholders;

void test_14_42()
{
    vector<int> vec = {1, 11, 112, 1122, 11122};
    size_t count = count_if(vec.begin(), vec.end(), bind(greater<int>(), _1, 1024));
    cout <<count <<endl;

    vector<string> svec = {"pooh", "God", "say", "there", "must", "be", "light", "pooh"};
    auto iter = find_if(svec.begin(), svec.end(), bind(not_equal_to<string>(), _1, "pooh"));
    cout << *iter << endl;

    transform(vec.begin(), vec.end(), vec.begin(), bind(plus<int>(), _1, 1));
    for(auto item: vec)
    {
        cout << item << " ";
    }
}

int main()
{
    test_14_42();
    return 0;
}