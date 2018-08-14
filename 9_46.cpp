#include <iostream>
#include <string>
using namespace std;

string add_prefix_and_postfix(const string & name, const string &prefix, const string &postfix)
{
    string result{name};
    string::size_type pos{0};
    result.insert(result.size(), postfix);
    result.insert(0, prefix);
    return result;
}


int main()
{
    cout << add_prefix_and_postfix("honey", "Ms.", "Winter") << endl;
    return 0;
}