#include<iostream>
using namespace std;
string function(int i);
int main(){
    int number;
    cout <<"Enter the number";
    cin >> number;
    cout << function(number);
}
string function (int num){
    if(num%2 ==0 ){
     return "Even";
    }else{
    return "odd";
    }
}