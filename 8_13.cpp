#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;

    while(getline(cin, line)){
        PersonInfo info;

        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);

        people.push_back(info);
    }

    for(const auto & p :people){
        cout << p.name << " ";
        for( const auto & ph :p.phones)
            cout << ph << " ";
        cout << "\n";
    }

    return 0;
}