#include<iostream>
using namespace std;

void printcharacter(int arr[], int size) {
    cout << "Printing the array" << endl;

    for(int i = 0; i < size; i++)   {
      cout << arr[i] << endl;

    }
      
    cout << "Printing Done" << endl;
}

int main()  {
    char ch[5] = {'a', 'b', 's', 'd', 'g'};
    cout << ch[3] << endl;

     cout << "Printing the array" << endl;

    for(int i = 0; i < 5; i++)   {
      cout << ch[i] << endl;

    }
      
    cout << "Printing Done" << endl;

}
