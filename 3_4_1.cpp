#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string input1, input2;
    while(cin >> input1 >> input2)
    {
        if(input1 == input2)
            cout << "Two strings are equal!" << endl;
        else
            cout << "The larger string is "<<((input1 < input2) ? input2 : input1) << endl;
    }
    return 0;
}