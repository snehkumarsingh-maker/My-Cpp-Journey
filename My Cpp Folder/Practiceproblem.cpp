#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void display_name() {
        cout << "Name: " << name << endl;
    }
};

int main() {

    // Creating an object of Student
    Student s;

    s.name = "Rahul";
    s.display_name();

    return 0;
}