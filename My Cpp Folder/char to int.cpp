#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch = '9';

    // Convert char to a one-character string
    string str(1, ch);

    // Convert string to integer
    int num = stoi(str);

    cout << num;

    return 0;
}