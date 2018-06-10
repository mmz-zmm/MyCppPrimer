#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string line;
    vector<string> text;
    while(getline(cin, line))
        text.push_back(line);

    for (auto it = text.begin(); it != text.end() && !it->empty();++it){
        for (auto c = it->begin(); c != it->end(); ++c)
            *c = toupper(*c);

        cout << *it << endl;
    }
    return 0;
}