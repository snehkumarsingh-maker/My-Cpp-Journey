#include <bits/stdc++.h>
using namespace std;

void f() {
    // Static variable
    static int count = 0;
    count++;
  	cout << count << " ";
}

int main() {
  	// Calling function f() 5 times
    for (int i = 0; i < 5; i++)
        f();
  
    return 0;
}