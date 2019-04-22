#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while(cin>>ch){
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
        }
    }
    cout << "Number of vowel a: " << aCnt<< endl;
    cout << "Number of vowel e: " << eCnt<< endl;
    cout << "Number of vowel i: " << iCnt<< endl;
    cout << "Number of vowel o: " << oCnt<< endl;
    cout << "Number of vowel u: " << uCnt<< endl;
    return 0;
}