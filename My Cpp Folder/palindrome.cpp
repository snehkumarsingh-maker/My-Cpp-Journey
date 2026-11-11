#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string text, revText;
    cout << "Enter a word: ";
    cin >> text;

    revText = text;
    reverse(revText.begin(), revText.end());

    if (text == revText) {
        cout << text << " is a palindrome.\n";
    } else {
        cout << text << " is not a palindrome.\n";
    }
    return 0;
}