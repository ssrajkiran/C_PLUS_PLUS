#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter the number:";
    cin >> a;
    cout <<"Enter the number2";
    cin >> b;
    if((a+b)%2 ==0){
        cout << a+b <<"Even";
    }else{
        cout << a+b <<"odd";
    }
}