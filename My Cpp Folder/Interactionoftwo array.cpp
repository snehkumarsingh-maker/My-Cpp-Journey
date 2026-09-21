#include<iostream>
#include<vector>
using namespace std;

int main () {
    int i = 0, j = 0;
    vector< int> ans;
    int element = arr1
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j])   {
            ans .push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

}