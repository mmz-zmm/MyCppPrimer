#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class isLenInRange
{
    private:
    size_t lower;
    size_t upper;
    public:
    isLenInRange(size_t lower_, size_t upper_):lower(lower_), upper(upper_){}
    bool operator()(const string & str)
    {
        return str.size() >= lower && str.size() <= upper;
    }

};

void test_14_39()
{
    isLenInRange predicate(1,9);
    ifstream in("./data/14_38_data.txt");
    string word;
    size_t len_9{0}, len_10{0};
    while(in >> word)
    {   
        if(predicate(word))
        {
            len_9++;
        }
        else
        {
            len_10++;
        }
    }
    cout << "number of words length between 1~9:"<< len_9<<"\n";
    cout << "number of words length longer than 9:"<< len_10<<"\n";
}

int main()
{
    test_14_39();
    return 0;
}