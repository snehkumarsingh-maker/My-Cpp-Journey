#include<iostream>
using namespace std;

int main () {
    int num;
    num = 1;
    char ch = 'A';
    switch (ch) {
        case 1:
            cout << "Case 1" << endl;
            break;
        case 'A':
            cout << "Case 2" << endl;
            break;
        default:
            cout << "Default case" << endl;
        
    }
    return 0;
}