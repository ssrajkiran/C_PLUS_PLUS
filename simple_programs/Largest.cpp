#include<iostream>
using namespace std;

int main (){

    int a,b,c;
    cout << "Enter the first number :" ;
    cin >> a;

    cout << "Enter the second number :";
    cin >> b;

    cout << "Enter the third number :";
    cin >> c;

    if( a > b && a > c){
        cout << "A is greater  : " << a << endl;
    }else if(b > a && b > c) {
        cout << "B is greater :" << b << endl;
    }else {
        cout << "C is greater :" << c << endl;
    }
}