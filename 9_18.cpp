#include <iostream>
#include <string>
#include <deque>
using namespace std;


int main()
{
    string word;
    deque<string> deque1;
    while(cin >> word){
        deque1.push_back(word);
    }
    for (auto iter = deque1.cbegin(); iter != deque1.cend(); ++iter)
        cout << *iter << " ";
    cout << endl;
    return 0;
}