#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;


int main()
{
    string input;
    while(getline(cin, input))
    {
        cout << input << endl;
    }
    return 0;
}