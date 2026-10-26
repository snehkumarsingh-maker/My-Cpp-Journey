#include <iostream>
#include <string>
using namespace std;

char binaryToOctalDigit(const string& bits)
{
    int value = 0;

    for (char bit : bits)
        value = value * 2 + (bit - '0');

    return char('0' + value);
}

string binaryToOctal(string binary)
{
    size_t dot = binary.find('.');

    string integerPart =
        (dot == string::npos) ? binary : binary.substr(0, dot);

    string fractionalPart =
        (dot == string::npos) ? "" : binary.substr(dot + 1);

    // Pad integer part on the left.
    while (integerPart.size() % 3 != 0)
        integerPart = "0" + integerPart;

    // Pad fractional part on the right.
    while (fractionalPart.size() % 3 != 0)
        fractionalPart += "0";

    string octal;

    // Convert integer part.
    for (size_t i = 0; i < integerPart.size(); i += 3)
        octal += binaryToOctalDigit(
            integerPart.substr(i, 3)
        );

    // Convert fractional part.
    if (!fractionalPart.empty()) {
        octal += '.';

        for (size_t i = 0; i < fractionalPart.size(); i += 3)
            octal += binaryToOctalDigit(
                fractionalPart.substr(i, 3)
            );
    }

    return octal;
}

int main()
{
    string binary =
        "1111001010010100001.010110110011011";

    cout << binaryToOctal(binary) << endl;

    return 0;
}