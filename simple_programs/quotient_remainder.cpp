#include<iostream>
using namespace std;
int main(){

    int num1,num2,rem,qu;

    cout << "Enter the first number";
    cin >> num1;

    cout<< "Enter the second number :";
    cin>>num2;

    qu = num1 /num2;
    rem= num1 % num2;

    cout << "Remainder is : " << rem << "\n";
    cout<< " Quotient is : " << qu << "\n";

    return 0;
}