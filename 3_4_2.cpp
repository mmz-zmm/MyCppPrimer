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
        auto size1 = input1.size();
        auto size2 = input2.size();
        if(size1 == size2) 
            cout << "Two strings have same length!" << endl;
        else
            cout << "The longer string is "<<((size1 < size2) ? input2 : input1) << endl;
    }
    return 0;
}