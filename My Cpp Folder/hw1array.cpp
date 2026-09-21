// print the sum of all elements of array 


#include<iostream>
using namespace std;

/*
// Ye mera methord h but ye bahur ghatiya h because ye fail hoh jb array ki value 1000 hogi tb 

int main() {
    int size;
    
    int arr[5] = {2,7,1,-4,11};

    // printing the array
    for(int i = 1; i < 5; i++);
        cout<< arr[0] + arr[1] + arr[2] + arr[3] + arr[4]  << " " << endl;

}
        */

int main () {
    int arr[5] = {2,7,1,-4,11};
    // sum ko track krne ke liye accumulatr variable 
    int sum = 0;
    // array index 0 se start hota h, vb isliye i = 0; se 5 tk chalalya h 
    for ( int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << sum << endl;
    return 0;

}