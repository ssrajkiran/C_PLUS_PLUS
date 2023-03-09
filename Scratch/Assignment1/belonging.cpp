#include<iostream>
using namespace std;
int main(){

    int a;
    cout <<"Enter the number:";
    cin >> a;
    if(a < 40){
        cout <<"Number is less than 40";
    }else if (a > 41 && a <=50){
        cout <<"Number is between 41 and 50";
    }else{
        cout <<"Number is greater than 51";
    }
}