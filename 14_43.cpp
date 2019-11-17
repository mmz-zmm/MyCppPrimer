#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;


void test_14_43()
{
    vector<int> ivec = {2, 4, 6, 8};
    int target;
    cin >> target;
    modulus<int> mod;

    auto is_divisible = [&](int i) -> bool { return 0 == mod(target, i); };

    auto result = all_of(ivec.begin(), ivec.end(), is_divisible);
    cout << (result ? "yes" : "no") << endl;
}

int main()
{
    test_14_43();
    return 0;
}