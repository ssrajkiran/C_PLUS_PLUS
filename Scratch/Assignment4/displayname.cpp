#include<iostream>
using namespace std;
int main(){
    int number;
    string arr[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    cout <<"Enter the number";
    cin >> number;
    if(number <= 7){
    cout << arr[number-1];
    }else{
        cout <<"Number is invalid";
    }
    
}