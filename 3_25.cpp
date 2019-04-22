#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores(11,0);
    unsigned grade;
    auto id = scores.begin();
    while(cin >> grade){
        if(grade <= 100)
            ++*(id + grade / 10);
    }

    for(auto value :scores)
        cout << value << " ";    
    return 0;
    
}