#include <iostream>
#include <string>
using namespace std;

string string_replace(const string & str, const string & oldval, const string & newVal)
{
    string result{str};
    if(result.size() < oldval.size())
        return result;
    string::size_type pos{0};
    while(pos <= result.size() - oldval.size()){
        if(result.substr(pos, oldval.size()) == oldval){
            result.erase(pos, oldval.size());
            result.insert(pos, newVal);
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