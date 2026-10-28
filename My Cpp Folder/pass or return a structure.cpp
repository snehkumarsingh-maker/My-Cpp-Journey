// C++ program to pass structure as an argument
// to the functions using Call By Value Method

#include <bits/stdc++.h>
using namespace std;

struct Distance {
    int kilometer;
    int meter;
};

// accepts distance as its parameters
void TotalDistance(Distance d1, Distance d2)
{
    // creating a new instance of the structure
    Distance d;

    // assigning value to new instance of structure
    d.kilometer = d1.kilometer
                  + d2.kilometer
                  + (d1.meter + d2.meter)
                        / 1000;

    d.meter = (d1.meter + d2.meter) % 1000;

    cout << "Total distance:";
    cout << "kilometer: "
         << d.kilometer << endl;

    cout << "meter: " << d.meter
         << endl;
}

// Function that initialises the value
// and calls TotalDistance function
void initializeFunction()
{
    // creating two instances of Distance
    Distance Distance1, Distance2;

    // assigning values to structure elements
    Distance1.kilometer = 10;
    Distance1.meter = 455;

    Distance2.kilometer = 9;
    Distance2.meter = 745;

    // calling function with (structure)
    // distance as parameters
    TotalDistance(Distance1, Distance2);
}

// Driver code0
int main()
{

    // Calling function to do required task
    initializeFunction();

    return 0;
}