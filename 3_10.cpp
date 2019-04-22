#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string str;
    while(cin >> str){
        for(auto c : str){
            if(!ispunct(c))
                cout << c;
        }
        cout << endl;
    }
    return 0;
}