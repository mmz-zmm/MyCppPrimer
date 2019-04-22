#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    const vector<string> scores = {"F","D","C","B","A","A++"};
    unsigned grade{0};
    while(cin>>grade){
        string lettergrade = (grade < 60)?scores[0]:scores[(grade -50)/10];
        lettergrade += (grade < 60 || grade == 100) ? "" : (grade % 10 < 3) ? "-" : (grade % 10 > 7) ? "+" : "";
        
        cout << grade << " " << lettergrade << endl;
    }
    return 0;
}