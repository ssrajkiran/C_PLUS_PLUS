#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"Enter the number";
    cin >> number;
    int rem;
    rem = number % 10;
    if(number < 10){
        if(number < 5){
            cout << number;
        }else{
            cout << "10";
        }
    }else{
        if(rem <= 5){
            cout << number - rem;
        }else{
            cout << number + (10-rem);
        }
    }

}