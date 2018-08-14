#include <iostream>
#include <string>
using namespace std;

string add_prefix_and_postfix(const string & name, const string &prefix, const string &postfix)
{
    string result{name};
    auto pos = result.begin();
    result.insert(pos, prefix.begin(), prefix.end());
    result.append(postfix);
    return result;
}


int main()
{
    cout << add_prefix_and_postfix("honey", "Ms.", "Winter") << endl;
    return 0;
}