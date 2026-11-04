#include <stack>
#include <string>
using namespace std;

bool v(string s) {
    stack<char> t;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') t.push(c);
        else {
            if(t.empty()) return false;
            char p = t.top(); t.pop();
            if((c == ')' && p != '(') || (c == '}' && p != '{') || (c == ']' && p != '[')) return false;
        }
    }
    return t.empty();
}