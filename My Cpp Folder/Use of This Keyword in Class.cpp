// C++ program to use this keyword
// to resolve shadowing issue
#include <iostream>
using namespace std;

class GFG 
{
  string name;
  
  public:
  GFG(string name)
  {
    // Use this keyword to initialize value 
    // of class member name as the parameter 
    // name passed in the constructor.
    this->name = name;
  }
  void display() 
  { 
    cout << name << endl; 
  }
};

// Driver code
int main()
{
  GFG gfg("GeeksforGeeks");
  gfg.display();
  return 0;
}