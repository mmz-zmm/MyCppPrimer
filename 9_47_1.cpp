#include <iostream>
#include <string>
using namespace std;




int main()
{
    string str{"ab2c3d7r4e6"};
    const string numbers{"0123456789"};
    const string alpha{"abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string::size_type pos = 0;
    while((pos = str.find_first_of(numbers, pos)) != string::npos){
        cout << "found number at index: " << pos
             << " element is " << str[pos] << endl;
        ++pos;
    }

    pos = 0;
    while((pos = str.find_first_of(alpha, pos)) != string::npos){
        cout << "found alphabet at index: " << pos
             << " element is " << str[pos] << endl;
        ++pos;
    }

    return 0;
}