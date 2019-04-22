#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void flist_insert(forward_list<string> & flst, const string & s1, const string & s2)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end() && *curr != s1){
        prev = curr;
        ++curr;
    }

    if(curr == flst.end()){
        flst.insert_after(prev, s2);
        return;
    }

    if(*curr == s1){
        flst.insert_after(curr, s2);
        return;
    }
}

void flst_print(const forward_list<string> & flst){
    for(auto item : flst){
        cout << item << " ";
    }
    cout << endl;
}

int main(){
    forward_list<string> flst{"I", "love", "you"};
    flist_insert(flst, "you", "too");
    flst_print(flst);

    flist_insert(flst, "but"," not true");
    flst_print(flst);
    return 0;
}