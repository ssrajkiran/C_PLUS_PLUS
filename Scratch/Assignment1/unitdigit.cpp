#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout << "Enter the first number";
    cin >> a;
    cout << "Enter the second number";
    cin >> b;
    int unitdigit_a  = a%10;
    int unitdigit_b = b%10;
    int sum = unitdigit_a + unitdigit_b;
    if(sum > 0){
        if(sum %2 == 0){
            cout <<"Even";
        }else{
            cout <<"odd";
        }
    }else{
        cout <<"Unit digit is zero";
    }
}