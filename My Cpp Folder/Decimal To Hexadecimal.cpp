#include <iostream>
using namespace std;

// Function to convert decimal to hexadecimal
void decToHexa(int n)
{
    // Array to store hexadecimal digits
    char hexaDeciNum[100];

    // Index for storing digits
    int i = 0;

    while (n != 0)
    {
        // Get the remainder after division by 16
        int remainder = n % 16;

        // Convert remainder to hexadecimal character
        if (remainder < 10)
            hexaDeciNum[i] = '0' + remainder;
        else
            hexaDeciNum[i] = 'A' + (remainder - 10);

        i++;

        // Reduce the number for the next iteration
        n /= 16;
    }

    // Remainders are stored in reverse order,
    // so print them from right to left
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}

int main()
{
    int n = 2545;

    decToHexa(n);

    return 0;
}