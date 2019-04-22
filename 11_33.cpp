#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;
    while(map_file >> key && getline(map_file, value)){
        if(value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            throw runtime_error("no rule for" + key);
    }
    return trans_map;
}

const string& transform(const string & key, const map<string, string> &trans_map)
{
    auto map_it = trans_map.find(key);
    //auto map_it = trans_map[key];
    if(map_it != trans_map.cend())
        return map_it->second;
    else
        return key;
}

void word_tranform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);
    string text;
    while(getline(input, text)){
        istringstream stream(text);
        string word;
        bool firstword = true;
        while(stream >> word){
            if(firstword)
                firstword = false;
            else
                cout << " ";
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

int main()
{
    ifstream rule_file("./data/11_33_map_rule.txt");
    ifstream input_file("./data/11_33_input.txt");
    word_tranform(rule_file,input_file);
    return 0;
}