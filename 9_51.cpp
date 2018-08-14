#include <iostream>
#include <string>
using namespace std;

class Date{
    public:
      Date(const string &str);
      unsigned day;
      unsigned month;
      unsigned year;
};
Date::Date(const string &str){
    // 1/1/1990
    if(str.find("/") != string::npos){
        auto pos = str.find_first_of("/");
        day = stoi(str.substr(0, pos));
        month = stoi(str.substr(pos + 1, str.find_first_of("/", pos + 1)));
        year = stoi(str.substr(str.find_last_of("/") + 1));
        return;
    }
    // January 1, 1900  or Jan 1 1900
    if(str.find("Jan") != string::npos) month = 1;
    if(str.find("Feb") != string::npos) month = 2;
    if(str.find("Mar") != string::npos) month = 3;
    if(str.find("Apr") != string::npos) month = 4;
    if(str.find("May") != string::npos) month = 5;
    if(str.find("Jun") != string::npos) month = 6;
    if(str.find("Jul") != string::npos) month = 7;
    if(str.find("Aug") != string::npos) month = 8;
    if(str.find("Sep") != string::npos) month = 9;
    if(str.find("Oct") != string::npos) month = 10;
    if(str.find("Nov") != string::npos) month = 11;
    if(str.find("Dec") != string::npos) month = 12;

    auto pos = str.find_last_not_of("0123456789 ");
    day = stoi(str.substr(str.find_first_of("0123456789"), pos));
    year = stoi(str.substr(pos + 1));
}


int main()
{
    Date date1("1/1/1990");
    cout << "year: " << date1.year << " month: " << date1.month << " day: " << date1.day << endl;
    Date date2("January 1,    1990");
    cout << "year: " << date2.year << " month: " << date2.month << " day: " << date2.day << endl;
    Date date3("Jan 1 1990");
    cout << "year: " << date3.year << " month: " << date3.month << " day: " << date3.day << endl;
    return 0;
}