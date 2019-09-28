#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class isStrOfLength
{
    private:
        size_t len;
    public:
    isStrOfLength(size_t len_):len(len_){}
    bool operator()(const string & s)
    {
        return s.size() == len;
    }
};

void test1428()
{
    vector<size_t> words_len_count(11);
    ifstream in("./include/14_38_data.txt");
    string word;
    while(in >> word)
    {
        for (int i = 1; i <= 10;++i)
        {
            if(isStrOfLength(i)(word))
            {
                words_len_count[i]++;
                break;
            }
        }
    }

    for (int i = 1; i < 10; ++i)
    {
        cout << "words of length " << i << ": " << words_len_count[i] << endl;
    }
}

int main()
{
    test1428();
    return 0;
}