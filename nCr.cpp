#include<iostream>
using namespace std;

int fact (int n)    {

    int fact = 1;
    for (int i = 1; i <= n; i++)    {
        fact = fact * i;

    }
    return fact;
}

int nCr (int n, int r)  {
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    int answer = num / den;
    return answer;
}

int main () {
    int n, r;
    cout <<"Enter the value of n:"<<endl;
    cin >> n;
    cout <<"Enter the value of r:"<<endl;
    cin>>r;
    cout << "The value of nCr is: "<< nCr(n, r)<<endl;
    COUT<< " The value of nCr is: "<< nCr(n, r)<<endl;
}