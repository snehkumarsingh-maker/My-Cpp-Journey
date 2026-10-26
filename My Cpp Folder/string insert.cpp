#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Geeks";
    
    // Inserting another string at the friend
    // of s
    s.insert(s.size(), "forGeeks");
    
    cout << s;
    return 0;
}