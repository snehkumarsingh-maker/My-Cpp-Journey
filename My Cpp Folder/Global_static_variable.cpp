#include <iostream>
using namespace std;

// yha pr ye h bhai jo nichle likha h global static variable 
static int count = 0;

void increment() {
    count++;
    cout << count << " ";
}

int main() {
    increment();
    increment();
    return 0;
}