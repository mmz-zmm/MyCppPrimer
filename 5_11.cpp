#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    char ch;
    while(cin>> noskipws >> ch){ //not skip space in input
        switch(ch){
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newlineCnt;
                break;
        }
    }
    cout << "Number of vowel a: " << aCnt<< endl;
    cout << "Number of vowel e: " << eCnt<< endl;
    cout << "Number of vowel i: " << iCnt<< endl;
    cout << "Number of vowel o: " << oCnt<< endl;
    cout << "Number of vowel u: " << uCnt<< endl;
    cout << "Number of space: " << spaceCnt<< endl;
    cout << "Number of tab: " << tabCnt<< endl;
    cout << "Number of new line: " << newlineCnt<< endl;
    return 0;
}