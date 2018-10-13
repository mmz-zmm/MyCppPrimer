#include <iostream>
#include <map>
#include <string>
using namespace std;


int main()
{
    multimap<string, string> works= {{"MoYan", "TanXiangXing"}};
    works.insert({"MoYan", "HongGaoLiang"});
    works.insert({"Geoge Martin", "Song of Ice and Fire"});
    works.insert({"WangXiaoBo", "The Golden Age"});

    string author("MoYan"), work("HongGaoLiang");
    //string author("CaoXueQin"), work("HongLouDream");

    auto beg = works.find(author);
    while(beg != works.end() && beg->first == author){
        if(beg->second == work){
            beg = works.erase(beg);
        }
        else
            ++beg;
    }

    for(auto item: works)
        cout << item.first << " wrote " << item.second << endl; 
    return 0;
}