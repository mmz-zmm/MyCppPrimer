#include <vector>
using std::vector;

bool find(vector<int>::const_iterator beg, vector<int>::const_iterator end, int val)
{
    for(auto iter = beg; iter != end; ++iter){
        if(value == *iter)
            return true;
    }
    return false;
}

vector<int>::const_iterator find_2(vector<int>::const_iterator beg, vector<int>::const_iterator end, int val)
{
    for(auto iter = beg; iter != end; ++iter){
        if(value == *iter)
            return iter;
    }
    return end;
}