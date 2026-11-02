#include <iostream>
#include <string.h>
using namespace std;

// Driver code
int main()
{
    int i;
    string str = "GeeksforGeeks";

    for (i = 0; str[i]; i++);
    cout << i << endl;
  
    return 0;
}