#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;


int main()
{
    list<string> lis;

    string val;
    while(cin >> val){
        lis.push_back(val);
    }

    string aim = "love";
    cout << count(lis.begin(), lis.end(), aim) << endl;

    return 0;
}