#include <iostream>
using namespace std;

class GfG {
public:
    // Static member function
    static void printMsg() { cout << "Welcome to GfG!"; }
};

int main() {
    // Invoking a static member function
    GfG::printMsg();
}