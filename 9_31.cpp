#include <iostream>
#include <list>
#include <forward_list>
using namespace std;


int main()
{
    list<int> li = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    auto iter = li.begin();
    while(iter != li.end()){
        if(*iter % 2){
            iter = li.insert(iter, *iter);
            ++iter;
            ++iter;
        }else{
            iter = li.erase(iter);
        }
    }

    for(auto item :li){
        cout << item << " ";
    }
    cout << endl;

    forward_list<int> flst = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end()){
        if(*curr % 2){
            curr = flst.insert_after(curr, *curr);
            prev = curr;
            ++curr;
        }else{
            curr = flst.erase_after(prev);
        }
    }

    for(auto item :flst){
        cout << item << " ";
    }
    cout << endl;
    return 0;
}