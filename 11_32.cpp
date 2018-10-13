#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main()
{
    multimap<string, string> works= {{"MoYan", "TanXiangXing"}};
    works.insert({"MoYan", "HongGaoLiang"});
    works.insert({"Geoge Martin", "Song of Ice and Fire"});
    works.insert({"WangXiaoBo", "The Golden Age"});

    map<string, set<string>> ordered_works;
    for(auto item :works){
        ordered_works[item.first].insert(item.second);
    }

    for(auto author: ordered_works)
        for(auto work: author.second)
            cout << author.first << " wrote " << work << endl; 
    return 0;
}