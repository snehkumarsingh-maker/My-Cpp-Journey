#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str)
{
    string rev = str;

    reverse(rev.begin(), rev.end());

    return str == rev;
}

int main()
{
    string str = "ABCDCBA";

    if (isPalindrome(str))
        cout << str << " is a palindrome.\n";
    else
        cout << str << " is not a palindrome.\n";

    return 0;
}