#include<iostream>
using namespace std;

int main (){

    int a=5,b=10;

    cout << "Before swapping of numbers : " << "a is :" << a <<"b is :" << b << endl;

    cout << "After swapping of numbers : " << endl;

    a = a*b; //50
    b=a/b; //5
    a=a/b; //10 

    cout << "Value of a and b is :" << a <<"and" << b <<endl;


    cout << "One more swapping using temporary variables :";
    int tmp;
    tmp =a;
    a=b;
    b=tmp;
    cout << "After swapping : " <<a <<":"<<b;

}