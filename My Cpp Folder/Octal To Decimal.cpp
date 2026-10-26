#include <iostream>
#include <string>
using namespace std;

// Function to convert octal string to decimal
int octalToDecimal(const string& n)
{
    return stoi(n, nullptr, 8);
}

int main()
{
    string n = "67";

    cout << octalToDecimal(n);

    return 0;
}