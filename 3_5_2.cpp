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
        if(totalStr.empty())
            totalStr += str1;
        else
            totalStr += " " + str1;
    }

    cout <<"The concatenation string is: " << totalStr << endl;
    
    return 0;
}