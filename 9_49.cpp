#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    ifstream in("./data/9_49_words.txt");
    string not_ascender_descender{"acemnorsuvwxz"};

    string word, longest_word;
    size_t max_len = 0;
    while(in >> word){
        if(word.length() > max_len && 
           (word.find_first_not_of(not_ascender_descender) == string::npos)){
            max_len = word.length();
            longest_word = word;
        }
    }
    cout << "longest word is: " << longest_word << endl;
    return 0;
}