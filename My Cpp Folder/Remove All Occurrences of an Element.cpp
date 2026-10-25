#include <iostream>
using namespace std;

void removeAllOccurrences(int arr[], int target, int n)
{
    int count = 0;

    // Count occurrences of target
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            count++;
    }

    int newSize = n - count;
    int temp[newSize];
    int index = 0;

    // Copy non-target elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != target)
            temp[index++] = arr[i];
    }

    // Print the resulting array
    for (int i = 0; i < newSize; i++)
        cout << temp[i] << " ";
}

int main()
{
    int arr[] = {1, 4, 3, 6, 8, 3, 9, 10, 3, 3, 7};
    int target = 3;

    int n = sizeof(arr) / sizeof(arr[0]);

    removeAllOccurrences(arr, target, n);

    return 0;
}