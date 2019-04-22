#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string totalStr, str1;
    while(cin >> str1)
    {
        totalStr += str1;
    }

    cout <<"The concatenation string is: " << totalStr << endl;
    
    return 0;
}