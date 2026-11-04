#include <string>
#include <algorithm>
using namespace std;

void r(string &s) {
    int b = 0, e = s.length() - 1;
    while(b < e) {
        swap(s[b], s[e]);
        b++;
        e--;
    }
}