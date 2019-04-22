#include <iostream>
#include <string>
using namespace std;


int main()
{
    string pre_word;
    string word;
    while (cin >> word){
        if(!isupper(word[0]) ) // constraint: start with upppercase character
            continue;

        if(word == pre_word){
            break;
        }
        else{
            pre_word = word;
        }
    }
    if(cin.eof()){
        cout << "No word has repeated appeared.";
    }else{
        cout << "Word " << word << " appears twice.\n";
    }
    return 0;
}