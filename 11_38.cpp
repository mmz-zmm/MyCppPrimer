#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

void word_counting()
{
    unordered_map<string, size_t>  word_count;
    string word;
    while(cin>>word){
        ++word_count[word];
    }

    for(const auto &w:word_count){
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
    }
}

unordered_map<string, string> buildMap(ifstream &map_file)
{
    unordered_map<string, string> trans_map;
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

const string& transform(const string & key, const unordered_map<string, string> &trans_map)
{
    auto map_it = trans_map.find(key);
    if(map_it != trans_map.cend())
        return map_it->second;
    else
        return key;
}

void word_tranform()
{
    ifstream map_file("./data/11_33_map_rule.txt");
    ifstream input("./data/11_33_input.txt");
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
    //word_counting();
    word_tranform();
    return 0;
}