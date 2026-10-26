#include <iostream>
#include <string>
using namespace std;

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(const string& hexVal)
{
    int decValue = 0;
    int base = 1; // Represents 16^0

    // Traverse the hexadecimal string from right to left
    for (int i = hexVal.length() - 1; i >= 0; i--) {

        int digit;

        // Convert characters '0'-'9' to values 0-9
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            digit = hexVal[i] - '0';
        }

        // Convert characters 'A'-'F' to values 10-15
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            digit = hexVal[i] - 'A' + 10;
        }

        // Ignore invalid hexadecimal characters
        else {
            continue;
        }

        // Add digit × corresponding power of 16
        decValue += digit * base;

        // Move to the next power of 16
        base *= 16;
    }

    return decValue;
}

int main()
{
    string hexNum = "1A";

    cout << hexadecimalToDecimal(hexNum);

    return 0;
}