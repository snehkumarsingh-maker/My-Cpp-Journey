#include <iostream>
#include <string>
using namespace std;

string firstLetterWord(const string& str)
{
    string result;
    bool isFirst = true;

    for (char ch : str) {
        if (ch == ' ') {
            isFirst = true;
        }
        else if (isFirst) {
            result += ch;
            isFirst = false;
        }
    }

    return result;
}

int main()
{
    string str = "geeks for geeks";

    cout << firstLetterWord(str);

    return 0;
}