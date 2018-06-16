#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, pre_ch='\0';
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
                if(pre_ch =='f')
                    ++fiCnt;
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
            case 'f':
                if(pre_ch =='f')
                    ++ffCnt;
                break;
            case 'l':
                if(pre_ch =='f')
                    ++flCnt;
                break;
        }
        pre_ch = ch;
    }
    cout << "Number of vowel a: " << aCnt<< endl;
    cout << "Number of vowel e: " << eCnt<< endl;
    cout << "Number of vowel i: " << iCnt<< endl;
    cout << "Number of vowel o: " << oCnt<< endl;
    cout << "Number of vowel u: " << uCnt<< endl;
    cout << "Number of space: " << spaceCnt<< endl;
    cout << "Number of tab: " << tabCnt<< endl;
    cout << "Number of new line: " << newlineCnt<< endl;
    cout << "Number of ff: " << ffCnt<< endl;
    cout << "Number of fl: " << flCnt<< endl;
    cout << "Number of fi: " << fiCnt<< endl;
    return 0;
}