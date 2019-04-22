#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    vector<char> vec{'I', 'L', 'o', 'v', 'e', 'Y', 'o', 'u'};
    string str(vec.begin(), vec.end());
    cout << str << endl;
    return 0;
}