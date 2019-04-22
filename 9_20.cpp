#include <iostream>
#include <list>
#include <deque>
using namespace std;


int main()
{
    list<int> input{1,2,3,4,5,6,7,8,9,0};
    deque<int> even_out;
    deque<int> odd_out;
    for (auto iter = input.cbegin(); iter != input.cend();++iter){
        if(*iter %2 == 0)
            even_out.push_back(*iter);
        else
            odd_out.push_back(*iter);
    }

    for(auto & item: even_out)
        cout << item << " ";
    cout << endl;
    
    for(auto & item: odd_out)
        cout << item << " ";
    cout << endl;
    return 0;
}