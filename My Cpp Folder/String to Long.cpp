#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "20";
    string s2 = "30";

    // Convert strings to unsigned long
    unsigned long n1 = stoul(s1);
    unsigned long n2 = stoul(s2);

    // Add the converted values
    unsigned long result = n1 + n2;

    cout << "unsigned long: " << result;

    return 0;
}