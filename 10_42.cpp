#include <iostream>
#include <list>
#include <string>
using namespace std;

void elimDups(list<string> & words)
{
    words.sort();
    words.unique();
}

int main()
{
    list<string> lst{"fox", "jumps", "over", "quick", "red", "slow", "the", "turtle"};
    elimDups(lst);
    for(auto word : lst)
        cout << word << " ";
    cout << endl;
    return 0;
}