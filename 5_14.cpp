#include <iostream>
#include <string>
using namespace std;


int main()
{
    string word;
    string pre_word = "";
    string repeated_most_word;
    unsigned repeated_times = 1;
    unsigned max_repeated_times = 1;
    while(cin >> word){
        if(word == pre_word){
            ++repeated_times;
            if(repeated_times > max_repeated_times){
                repeated_most_word = word;
                max_repeated_times = repeated_times;
            }
        }else{
            repeated_times = 1;
            pre_word = word;
        }
    }

    if(max_repeated_times != 1){
        cout << "Word " << repeated_most_word << " repeated " << max_repeated_times << " times.\n";
    }
    else {
        cout << "No word has come out repeatedly.\n";
    }

}