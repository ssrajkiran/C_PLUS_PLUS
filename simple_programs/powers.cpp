#include<iostream>
using namespace std;

int main ()
{

    int base ,exponents,result =1;

    cout << "Enter base and exponents :";
    cin >> base >>exponents;

    while (exponents!=0){
        result = result*base;
        exponents--;
    }

    cout << result;
    return 0;
}