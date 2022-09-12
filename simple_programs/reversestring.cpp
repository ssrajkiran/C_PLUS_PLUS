#include<iostream>
using namespace std;

int main(){

    string a;
    cout <<"Enter the string have to reverse:";

   getline(cin ,a);
    
    int len = a.length();
    int n =len;

    while (n--)
    {
        /* code */
        cout << a[n];
    }
    
}