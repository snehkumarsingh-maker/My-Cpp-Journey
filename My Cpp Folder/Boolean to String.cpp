#include <iostream>
#include <string>
using namespace std;

// Function to convert bool to string
string boolToString(bool value)
{
    if (value)
        return "true";

    return "false";
}

int main()
{
    bool value = true;

    cout << boolToString(value) << endl;

    return 0;
}