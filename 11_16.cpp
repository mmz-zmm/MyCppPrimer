#include <map>
#include <iostream>
using namespace std;


int main()
{
    map<string, size_t> word_count{{"love", 521}};
    auto map_it = word_count.begin();
    cout << "before: " << map_it->second << endl;
    map_it->second = 1314;
    cout << "after: " << map_it->second << endl;
    return 0;
}