#include <iostream>
#include <string>
using namespace std;

string string_replace(const string & str, const string & oldval, const string & newVal)
{
    string result{str};
    if(result.size() < oldval.size())
        return result;
    auto pos = result.begin();
    while(pos <= result.end() - oldval.size()){
        if(string(pos, pos + oldval.size()) == oldval){
            pos = result.erase(pos, pos + oldval.size());
            pos = result.insert(pos, newVal.begin(), newVal.end());
            pos += newVal.size();
        }else{
            ++pos;
        }
    }
    return result;
}

int main()
{
    cout << string_replace("tho i love you", "tho", "though")<<endl;
    cout << string_replace("i tho love you", "tho", "though")<<endl;
    cout << string_replace("i love you tho", "tho", "though")<<endl;
    cout << string_replace("tho tho", "tho", "though")<<endl;
    cout << string_replace("tho", "tho", "though")<<endl;
    return 0;
}