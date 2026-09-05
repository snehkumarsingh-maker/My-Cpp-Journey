#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountain(vector<int> arr) {
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s)/2;

    while(s<e)  {
        if(arr[mid] < arr[mid + 1])  {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s)/2; 
    }
    return e;
}

int main()  {
    vector<int> arr = { 2, 1, 0, 9, 98, 90000, 987654, 0, };
    cout<<"Peak Index in Mountain Array is:"<<peakIndexInMountain(arr)<<endl;
    return 0;
}