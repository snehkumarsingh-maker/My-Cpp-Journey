#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void splitString(const string& str)
{
    stringstream ss(str);
    string word;

    while (ss >> word) {
        cout << word << '\n';
    }
}

int main()
{
    string str = "How do you do!";

    splitString(str);

    return 0;
}