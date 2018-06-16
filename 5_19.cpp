#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str1, str2;
    do{
        cout << "please enter two strings: ";
        cin >> str1 >> str2;
        cout << (str1.size() < str2.size()? str1 : str2) << endl;
    } while (cin);
    return 0;
}