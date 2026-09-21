#include<iostream>
using namespace std;

int fingUnique( int *arr, int size)  {

    int ans = 0;

    for ( int i = 0; i < size; i++) {
        ans = ans ^ arr[i];

    }
    return ans;
}

int main()  {

    int arr[7] = {1,4,3,4,3,2,2};
    int size = 7;

    int E = fingUnique(arr, size);
    cout << "The Unique element is: "<< E << endl;

    return 0;
}