#include <iostream>
#include <stack>
using namespace std;


int main()
{
    //string expr{"life is (like a box) of (((chocolate))), you (never know (what you get))"};
    string expr{"life is (like a box) of (((chocolate))), you never know (what you get))"};
    //string expr{"life is (like a box of (((chocolate))), you (never know (what you get))"};
    char replacement = '#';

    size_t parenthese_num = 0;

    stack<char> charStack;
 
    for(auto ch : expr){
        charStack.push(ch);
        if('(' == ch)
            ++parenthese_num; // this variable is used to avoid unbalance of parentheses
        
        if( parenthese_num && (')'== ch)){
            while( '(' != charStack.top())
                charStack.pop();
            charStack.pop(); // remove '('
            charStack.push(replacement);
            --parenthese_num;
        }
    }

    string output;
    while(! charStack.empty()){
        output.insert(output.begin(), charStack.top());
        charStack.pop();
    }
    cout << output << endl;
    return 0;
}