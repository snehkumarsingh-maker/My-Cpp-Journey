#include<iostream>
using namespace std;

int main()  {
/*
        int a = 4;
        int b = 1;

    cout<< " a&b " << (a&b) <<endl;
    cout<<" a|b" << (a|b) <<endl; 
    cout<<" ~a "<< ~a <<endl;
    cout<<" a^b " << (a^b) <<endl;

    cout<<(17<<1)<<endl;
    cout<<(17>>1)<<endl;

    int i = 7;

    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(--i)<<endl;
    cout<<(i--)<<endl;


    int a,b = 1; 
    a = 10;

    if (++a) 
    cout<<b;
    else
    cout<<(++b);

     int a = 1;
     int b = 2;
     
     if (a-->0 && ++b>2)  {
        cout<<"stage 1 - inside If"; 
     }
     else {("stage 2 - inside If");
    }
    cout<< a <<" "<<b<<endl;


int n = 3;
cout<<(25*(++n));
*/

int a = 1;
int b = a++;
int c = ++a;
cout<<b;
cout<<c;
}