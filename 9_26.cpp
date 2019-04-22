#include <iostream>
#include <vector>
#include <list>
using namespace std;


int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec(begin(ia), end(ia));
    list<int> lis(begin(ia), end(ia));

    auto it1 = vec.begin();
    while(it1 != vec.end()){
        if(*it1 % 2)
            ++it1;
        else
            it1 = vec.erase(it1);
    }
    for( auto item : vec)
        cout << item << " ";
    cout << endl;

    auto it2 = lis.begin();
    while(it2 != lis.end()){
        if(*it2 % 2)
            it2 = lis.erase(it2);
        else
            ++it2;
    }
    for(auto item : lis)
        cout << item << " ";
    cout << endl;

    return 0;
}