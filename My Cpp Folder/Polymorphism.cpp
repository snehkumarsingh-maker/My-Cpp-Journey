#include <iostream>
using namespace std;

class Animal {
public:
    // Function to display animal sound
    void sound() {
        cout << "Animal makes a sound";
    }
};

class Dog : public Animal {
public:
    // Overriding the sound function
    void sound() {
        cout << "Dog barks";
    }
};

int main() {
    Dog d;

    // Calling the Dog class function
    d.sound();

    return 0;
}