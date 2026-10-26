#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to convert long long to string
string longToString(long long num)
{
    // Handle zero separately
    if (num == 0)
        return "0";

    bool isNegative = num < 0;

    // Use unsigned arithmetic to safely handle LLONG_MIN
    unsigned long long value =
        isNegative ? -(unsigned long long)num
                   : (unsigned long long)num;

    stack<char> digits;

    // Extract digits from right to left
    while (value > 0) {
        digits.push('0' + value % 10);
        value /= 10;
    }

    string result;

    // Restore digits to their original order
    while (!digits.empty()) {
        result += digits.top();
        digits.pop();
    }

    // Add the negative sign if required
    if (isNegative)
        result = "-" + result;

    return result;
}

int main()
{
    long long num = -10243213;

    cout << longToString(num);

    return 0;
}