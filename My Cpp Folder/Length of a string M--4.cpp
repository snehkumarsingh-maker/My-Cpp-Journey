#include <iostream>
#include <string.h>
using namespace std;

// Driver code
int main()
{
    string str = "GeeksforGeeks";


    int i = 0;
    while (str[i])
        i++;
    cout << i << endl;

    return 0;
}