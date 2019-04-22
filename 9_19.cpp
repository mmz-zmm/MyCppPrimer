#include <iostream>
#include <string>
#include <list>
using namespace std;


int main()
{
    string word;
    list<string> input;
    while(cin >> word){
        input.push_back(word);
    }
    for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
        cout << *iter << " ";
    cout << endl;
    return 0;
}