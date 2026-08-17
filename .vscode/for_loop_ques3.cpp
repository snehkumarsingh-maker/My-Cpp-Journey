#include<iostream>
using namespace std;

int main() {
    for( int i = 0; i<=5; i+=2)  {
        cout<< i <<endl;
        if(i&1) {
            continue;
        }
        i++;
    }
}