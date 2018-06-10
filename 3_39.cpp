#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main()
{
    // string example
    string s1("I love Dong Tian");
    string s2("I love winter");

    if(s1 == s2)
        cout << "Same string!" << endl;
    else if(s1 < s2)
        cout<< "The 1st string < the 2nd string!" << endl;
    else
        cout<< "The 1st string > the 2nd string!" << endl;
    cout << "======================================" <<endl;
    // c-style character strings
    const char *cs1 = "It is a bad day!";
    const char *cs2 = "It is a bad feeling!";

    auto result = strcmp(cs1, cs2);
    if(result == 0)
        cout << "Same string!" << endl;
    else if(result < 0)
        cout<< "The 1st string < the 2nd string!" << endl;
    else
        cout<< "The 1st string > the 2nd string!" << endl;
    return 0;
}