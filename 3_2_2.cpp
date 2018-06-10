#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string input;
    while(cin >> input)
    {
        cout << input << endl;
    }
    cin.get();
    return 0;
}