// Combined Question 
#include <iostream>
using namespace std;

// Function to find average of an array
double average(int arr[], int n)
{
    if (n == 0)
        return 0;

    long long sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return static_cast<double>(sum) / n;
}

int main()
{
    int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << average(arr, n) << endl;

    return 0;
}


// convert binary to decimal
/*
#include <iostream>
#include <cmath>

using namespace std;

// function prototype
int convert(long long);

int main() {
  long long n;
  cout << "Enter a binary number: ";
  cin >> n;
  cout << n << " in binary = " << convert(n) << " in decimal";
  return 0;
}
*/
// function definition
#include <iostream>
#include <cmath>

using namespace std;
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }