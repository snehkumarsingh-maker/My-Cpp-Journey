#include <iostream>
using namespace std;

int main() {
    int n, binary = 0, remainder, product = 1;
    cout << "Enter a decimal number: ";
    cin >> n;

    while (n != 0) {
        remainder = n % 2;
        binary = binary + (remainder * product);
        n = n / 2;
        product *= 10;
    }
    cout << "The binary format is: " << binary << endl;
    return 0;
}